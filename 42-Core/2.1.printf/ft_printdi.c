#include "ft_printf.h"

static int	size(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_printdi(int n)
{
	int	len;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	len = size(n);
	if (n < 0)
	{
		ft_printc('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_printdi(n / 10);
		ft_printdi(n % 10);
	}
	if (n <= 9)
		ft_printc(n + '0');
	if (n == 0)
		return (1);
	return (len);
}