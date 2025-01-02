#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_printdi(int n);
int	ft_printc(int c);
int	ft_prints(char *str);
int	ft_printf(const char *str, ...);
int	ft_printu(unsigned int n);
int	ft_printxx(unsigned int n, char *base);
int	ft_printp(void *ptr, char *base);

#endif