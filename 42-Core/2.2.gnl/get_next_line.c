#include "get_next_line.h"

size_t  ft_strlen(const char *str)
{
    size_t  len;

    len = 0;
    while (str[len])
        len++;
    return(len);
}

char *read_and_append(int fd, char *buff)
{
    char tempbuff[BUFFER_SIZE + 1];
    ssize_t byteread;

    byteread = read(fd, tempbuff, BUFFER_SIZE);
    if (byteread < 0)
    {
        free(buff);
        return (NULL);
    }
    if (byteread == 0)
        return (buff);

    tempbuff[byteread] = '\0';
    char *new_buff = ft_strjoin(buff, tempbuff);
    free(buff);
    return (new_buff);
}

char *extract_line(char **buff)
{
    int nlpos;
    char *cur_line;
    char *new_buff;

    if (ft_strchr(*buff, '\n') == NULL)
        return (NULL);

    nlpos = ft_strchr(*buff, '\n') - *buff;
    cur_line = ft_substr(*buff, 0, nlpos + 1);
    new_buff = ft_substr(*buff, nlpos + 1, ft_strlen(*buff) - nlpos - 1);
    free(*buff);
    *buff = new_buff;
    return (cur_line);
}

void cleanup(char **buff)
{
    if (*buff)
    {
        free(*buff);
        *buff = NULL;
    }
}

char *get_next_line(int fd)
{
    static char *buff = NULL;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    if (buff == NULL)
        buff = ft_strdup("");
    if (buff == NULL)
        return (NULL);

    while (ft_strchr(buff, '\n') == NULL)
    {
        buff = read_and_append(fd, buff);
        if (buff == NULL) // Read error
        {
            cleanup(&buff);
            return (NULL);
        }
    }

    return (extract_line(&buff));
}
