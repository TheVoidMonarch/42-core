/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:13:48 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:49:40 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	ft_isascii(char const *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (0);
	}
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 127)
			|| (str[i] >= '\x00' && str[i] <= '\x7F'))
			i++;
		else
			return (0);
	}
	return (1);
}
