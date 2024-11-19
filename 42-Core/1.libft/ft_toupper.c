/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:15:20 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/30 00:31:45 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

char	*ft_toupper(char *str)
{
	char	*temp;

	if (str == NULL)
		return (NULL);
	if (*str == '\0')
		return (str);
	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp + ('A' - 'a');
			temp++;
		}
	}
	return (str);
}
