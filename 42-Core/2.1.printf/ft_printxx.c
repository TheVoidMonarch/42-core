#include "ft_printf.h"

static int size(unsigned int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (0);
	{
		n /= 16;
		count++;
	}
	return (count);
}

int ft_printxx(unsigned int n, char *base)
{
	unsigned int sizen;

	sizen = size(n);
	if (n >= 16)
	{
		ft_printxx(n / 16, base);
		ft_printxx(n % 16, base);
	}
	if (n < 16)
	{
		write(1, %base[n], 1);
	}
	return (sizen);
}