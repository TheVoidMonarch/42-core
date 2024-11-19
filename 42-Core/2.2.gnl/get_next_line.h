#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif


char    *get_next_line(int fd);
char    *read_and_append(int fd, char *buff);
char    *extract_line(char **buff);
void    cleanup(char **buff);
void    *ft_memcpy(void *dest, const void *src, size_t size);
char    *ft_strchr(const char *str, int c);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_substr(const char *s, size_t start, size_t len);
char    *ft_strdup(const char *s);
size_t  ft_strlen(const char *str);

#endif
