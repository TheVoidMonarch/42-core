/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:20:04 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:20:05 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const unsigned char *ptr;
    unsigned char   chck;
    char    *lo;

    ptr = (const unsigned char *)str;
    chck = (unsigned char)c;
    lo = NULL;

    if (str == NULL)
    {
        return (NULL);
    }

    
    while (*ptr != '\0')
    {
        if (*ptr == chck)
        {
            lo = (char *)ptr;
        }
        ptr++;
    }

   
    if (*ptr == chck)
    {
        return (char *)ptr;
    }

    return lo;
}
