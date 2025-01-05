/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:11:13 by sbin-jef          #+#    #+#             */
/*   Updated: 2025/01/05 12:11:13 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenptr(uintptr_t num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_ptr(uintptr_t num)
{
	int		len;

	len = 0;
	if (num >= 16)
	{
		len += ft_ptr(num / 16);
		len += ft_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_pc(num + '0', 1);
		else
			ft_pc(num - 10 + 'a', 1);
		len++;
	}
	return (len);
}

int	ft_printp(unsigned long long ptr)
{
	int	printlen;

	printlen = 0;
	printlen += write(1, "0x", 2);
	if (ptr == 0)
	{
		printlen += write(1, "0", 1);
	}
	else
	{
		printlen += ft_ptr(ptr);
	}
	return (printlen);

}