#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>  // For malloc, free
# include <unistd.h>  // For read

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42  // Default buffer size if not defined
# endif

// Function prototypes
char    *get_next_line(int fd);
char    *extract_line(int fd, char **buffer);
char    *ft_strdup(const char *s);
size_t  ft_strlen(const char *s);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_substr(char *s, unsigned int start, size_t len);

#endif