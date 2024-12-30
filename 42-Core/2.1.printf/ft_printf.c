#include "ft_printf.h"

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_format(va_list args, char form)
{
	int count;

	count = 0;
	if (form == 'c')
		count += ft_putchar(va_args(args, int));
	else if (form == 's')
		count += ft_putstr(va_args(args, char *));
	else if (form == 'd' || form == 'i')
		count += ft_putnbr(va_args(args, int));
	else if (form == 'u')
		count += ft_putunsigned(va_args(args, unsigned int));
	else if (form == 'p')
		count += ft_putpointer(va_args(args, unsigned long long));
	else if (form == 'x' || form == 'X')
		count += ft_puthex(va_args(args, unsigned int), form);
	else if (form == '%')
		count += ft_putpercent();
	return (count);
}