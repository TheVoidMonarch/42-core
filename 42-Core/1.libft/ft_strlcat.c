/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:02 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:19:03 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stddef.h>
/*#include <stdio.h>*/
unsigned int	length(char *vtr)
{
	unsigned int	x;

	x = 0;
	while (vtr[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	v;
	unsigned int	c;
	unsigned int	x;

	x = 0;
	v = length(dest);
	c = length(src);
	if (size <= v)
		return (size + c);
	while (src[x] != '\0' && v < size - 1)
	{
		dest[v] = src[x];
		v++;
		x++;
	}
	dest[v] = '\0';
	return (length(dest) + c);
}
