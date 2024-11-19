/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:51 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:19:53 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (str == NULL)
	{
		return(NULL);
	}
	
    size_t x;
    size_t z;

    if (*to_find == '\0')
        return (char *)str;

    x = 0;
    while (str[x] && x < n)
    {
        z = 0;
        while (str[x + z] == to_find[z] && to_find[z] && (x + z) < n)
            z++;
        if (to_find[z] == '\0')
            return (char *)&str[x];
        x++;
    }
    return NULL;
}
