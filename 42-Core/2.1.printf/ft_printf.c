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

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	int count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if str[i] == '%';
		{
			count += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}