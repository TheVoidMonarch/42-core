/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:11 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:19:12 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "libft.h"

unsigned int	length(const char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	og;

	og = 0;
    if (size == 0)
        return (0);
	if (size != 0)
	{
		while ((src[og] != '\0') && (og < size - 1))
		{
			dest[og] = src[og];
			og++;
		}
		dest[og] = '\0';
	}
	return (length(src));
}
