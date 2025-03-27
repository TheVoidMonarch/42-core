#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

// Main function
char	*get_next_line(int fd);

// Utils
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *string, int chr);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, size_t start, size_t len);

#endif
