/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:14:35 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 15:28:23 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
/*#include <stdio.h>*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		*ptr++ = 0;
	}
}

/*
int main() {
    char data[10] = "Hello";
    printf("Before bzero: %s\n", data);
    ft_bzero(data, sizeof(data));
    printf("After bzero: ");
    for (int i = 0; i < sizeof(data); i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
*/
/*
The ft_bzero function works by setting each byte of a given memory area to zero.
Here’s a step-by-step explanation of how the provided code works:

ft_bzero Function
Function Signature:

void ft_bzero(void *s, size_t n)

```void *s: A pointer to the memory area that needs to be zeroed.
size_t n: The number of bytes to set to zero.```

ptr is a pointer of type unsigned char *.
It is initialized to point to the same memory location as s.
The cast to unsigned char * is necessary to perform byte-wise operations.

```unsigned char *ptr;
ptr = (unsigned char *)s;```

The while loop runs n times.
In each iteration, the byte pointed to by ptr is set to 0,
and then ptr is incremented to point to the next byte in the memory area.

```while (n--)
{
    *ptr++ = 0;
}```
*/
