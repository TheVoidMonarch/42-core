#include "ft_printf.h"

int ft_printp(int *ptr)
{
    int count;

    count = 0;
    if (ptr == NULL)
    {
        count += ft_prints("0x");
    }
    else
    {
        count += ft_prints("0x");
        count += ft_printxx((unsigned long long)ptr, "0123456789abcdef");
    }
    return count;
}
