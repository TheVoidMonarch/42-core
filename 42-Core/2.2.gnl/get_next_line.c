#include "get_next_line.h" // So let's get this bread. This is the header file.

char	*get_next_line(int fd)
{
    static char         *buffer; // this is the static buffer that stores the read bytes
    char                *line; // this is the line that is extracted from the buffer
    int                 bytes_read; // this is the number of bytes read from the file

    buffer = NULL; // this is the buffer. It is set to NULL
if (fd < 0 || BUFFER_SIZE <= 0) // if the file descriptor is NULL or the buffer size is less than or equal to 0
        return (NULL);//this returns NULL
    if (!(buffer))//if for some reason the buffer is NULL, then we allocate memory for it
        buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));// using this line
    if (!buffer) // if the buffer is still NULL, then we return NULL
        return (NULL); //with this line
    while((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) //this line starts the loop
    {
        buffer[bytes_read] = '\0'; //this line adds a null terminator to the buffer
        line = extract_line(fd, &buffer); // this line calls the extract_line function
        if (line) // if theres a result, then we return it
            return (line); //with this line
    }
    return (NULL); //if the loop ends, this return NULL
} 
// boii, its barely 25 lines. Norminette wouldnt bitch about this.

/* So basically this part is the main function of the project.
the dreaded get_next_line function. 
I loathe it so much. So what it do? it reads the file in chunks,
based on the set buffer size, until EOL , then stored the read bytes
into a static buffer, and then the line is extracted and returned
the result to the caller. Off to the next one.*/

char    *extract_line(int fd, char **buffer) // it do what it says.
{
    char    *line; // variable for line that was extracted
    char    *temp; //temporary variable for the line
    size_t  i; //variable for the index
    size_t  line_len; // variable for the length of the line

    if (!*buffer || fd < 0) // so, this is the condition
        return (NULL); // if the buffer is NULL or the file descriptor is less than 0
    i =0; // Index set to 0
    while ((*buffer)[i] != '\0' && (*buffer)[i] != '\n')// the loop to find the newline or null terminated
        i++;
    if ((*buffer)[i] == '\0' && i == 0) // should the buffer is null or empty,
        return (NULL); // we return NULL
    line_len = i + 1; // why +1? because we need to allocate memory for the null terminator
    line = ft_substr(*buffer, 0, line_len); // what happens here? we extract the line with ft_substr
    if (!line) // if the line is NULL
        return (NULL); // we return NULL
    temp = ft_substr(*buffer, line_len, ft_strlen(*buffer) - line_len); // we extract the rest of the buffer
    free(*buffer); // we free the buffer, no more junk memory
    *buffer = temp; // we update the buffer
    return (line); // we return the line
} // and that's it. 25 lines. Take that, Norminette

/*So this part is the extract_line function.
it extracts the line from the buffer. Exactly what it says on the tin.*/