/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:16:31 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:16:32 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void *ft_memset(void *str, int c,size_t n)
{
	if (str == NULL)
	    return (NULL);

	char *ptr;
	ptr = (char *)str;
	while (n--)
	{
		*ptr++ = c;
	}
	return (str);
}
