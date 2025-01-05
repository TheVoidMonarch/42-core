/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:14:29 by sbin-jef          #+#    #+#             */
/*   Updated: 2025/01/05 12:14:29 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printdi(int n);
int		ft_printc(int c);
int		ft_prints(char *str);
int		ft_printf(const char *str, ...);
int		ft_printu(unsigned int n);
int		ft_printxx(unsigned int num, const char form);
int		ft_printp(unsigned long long ptr);
void	ft_pc(char c, int fd);
void	ft_hex(unsigned int num, const char form);
int		ft_lenhex(unsigned int num);
int		ft_lenptr(uintptr_t num);
int		ft_ptr(uintptr_t num);

#endif
