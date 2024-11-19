/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:19:31 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:19:33 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

char *ft_strdup(const char *str)
{
	size_t len;
	len = 0;
	while (str[len] != '\0')
		len++;

	char *dup;
	dup = malloc ((len +1) * sizeof (char));
	if (!dup)
		return (NULL);

	size_t i;

	i = 0;
	while (i <= len)
	{
	dup[i] = str[i];
	i++;
	}
	return (dup);
}
