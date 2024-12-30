#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}

int ft_putnbr(int n)
{
    char buffer[11];
    int i = 0;

    if (n == 0)
    {
        ft_putchar('0');
        return (1);
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
        i++;
    }
    while (n > 0)
    {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }
    buffer[i] = '\0';
    // Reverse the buffer
    for (int j = 0; j < i / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }
    ft_putstr(buffer);
    return (i);
}

int ft_format(va_list args, char form)
{
    int count = 0;

    if (form == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (form == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (form == 'd' || form == 'i')
        count += ft_putnbr(va_arg(args, int));
    // Add other format specifiers (u, p, x, X, %) as needed
    else if (form == '%')
        count += ft_putchar('%');
    else
        count += ft_putchar(form); // Handle invalid format specifier by printing it
    return (count);
}

int ft_printf(const char *str, ...)
{
    int i = 0;
    va_list args;
    int count = 0;

    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
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
