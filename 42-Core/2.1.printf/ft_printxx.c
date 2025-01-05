/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:07:55 by sbin-jef          #+#    #+#             */
/*   Updated: 2025/01/05 12:07:55 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenhex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void	ft_hex(unsigned int num, const char form)
{
	if (num >= 16)
	{
		ft_hex(num / 16, form);
		ft_hex(num % 16, form);
	}
	else
	{
		if (num <= 9)
			ft_pc((num + '0'), 1);
		else
		{
			if (form == 'x')
				ft_pc ((num - 10 + 'a'), 1);
			if (form == 'X')
				ft_pc((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printxx(unsigned int num, const char form)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hex(num, form);
	return (ft_lenhex(num));
}