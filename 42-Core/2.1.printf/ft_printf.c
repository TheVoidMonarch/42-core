/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:15:26 by sbin-jef          #+#    #+#             */
/*   Updated: 2025/01/05 12:15:26 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pc(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_format(va_list args, char form)
{
	int	count;

	count = 0;
	if (form == 'c')
		count += ft_printc(va_arg(args, int));
	else if (form == 's')
		count += ft_prints(va_arg(args, char *));
	else if (form == 'd' || form == 'i')
		count += ft_printdi(va_arg(args, int));
	else if (form == 'u')
		count += ft_printu(va_arg(args, unsigned int));
	else if (form == 'p')
		count += ft_printp(va_arg(args, unsigned long long));
	else if (form == 'x' || form == 'X')
		count += ft_printxx(va_arg(args, unsigned int), form);
	else if (form == '%')
		count += ft_printc('%');
	return (count);
}


int	ft_printf(const char *str, ...)

{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
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
			count += ft_printc(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
