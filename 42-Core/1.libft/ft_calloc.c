/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:14:47 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:30:00 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			i;
	unsigned char	*temp_ptr;

	ptr = malloc(count * size);
	temp_ptr = (unsigned char *) ptr;
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		temp_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
