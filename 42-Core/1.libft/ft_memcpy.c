/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:16:10 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:16:11 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    if (dest == NULL || src == NULL)
        return NULL;

    unsigned char *dst;
    const unsigned char *source;
    size_t i;

    i = 0;
    dst = (unsigned char *)dest;
    source = (const unsigned char *)src;

    while (i < size)
    {
        dst[i] = source[i];
        i++;
    }
    return dest;
}
