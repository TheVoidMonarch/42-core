#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stddef.h>

// Function prototypes
int	ft_atoi(char *str);
int	ft_isalpha(char const *str);
int	ft_isalnum(char *str);
int	ft_isascii(char const *str);
int	ft_isadigit(char const *str);
int	ft_ispring(char const *str);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *str,size_t n, int c);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c,size_t n);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_tolower(char *str);
char	*ft_toupper (char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char *str, char *charset);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


#endif /* LIBFT_H */
