/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:17:39 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/06/28 16:54:01 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd) {
    if (n == -2147483648) {
        ft_putstr_fd("-2147483648", fd);
        return;
    }
    
    if (n < 0) {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    
    if (n >= 10) {
        ft_putnbr_fd(n / 10, fd);
    }
    
    ft_putchar_fd((n % 10) + '0', fd);
}

