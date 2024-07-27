/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabanna <jabanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:09:33 by jabanna           #+#    #+#             */
/*   Updated: 2024/06/19 10:44:20 by jabanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_puthex(unsigned int num, const char format);
int		ft_putptr(unsigned long long ptr);
int		ft_putunsigned(unsigned int n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putpercent(void);
int		check(va_list args, const char index);
int		hex_len(unsigned int n);
int		ft_ptr_len(uintptr_t n);
void	ft_put_ptr(uintptr_t n);
void	ft_putnbru(unsigned int n);
void	ft_put_hex(unsigned int num, const char format);

#endif
