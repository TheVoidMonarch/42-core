#include "ft_printf.h"

int ft_printp(int *ptr)
{
	int count;
	
	count = 0;
	if (ptr == NULL)
	{
	count += ft_prints("0x");
	}
	count += ft_prints("0x1");
	count += ft_printxx((*(int *)&ptr), 'p');
	return (count)
}