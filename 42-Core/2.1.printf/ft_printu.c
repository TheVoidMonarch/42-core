#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	unsigned int	len;
	unsigned int	nb;

	nb = n;
	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	if (n > 9)
	{
		ft_printu(n / 10);
		ft_printu(n % 10);
	}
	if (n <= 9)
		ft_printc(n + '0');
	if (n == 0)
		return (1);
	return (len);
}