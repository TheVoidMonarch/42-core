/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:10:54 by sbin-jef          #+#    #+#             */
/*   Updated: 2025/01/05 12:10:54 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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