/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabanna <jabanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:59:19 by jabanna           #+#    #+#             */
/*   Updated: 2024/06/19 09:34:49 by jabanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbru(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	ft_putunsigned(unsigned int n)
{
	int				i;
	unsigned int	nb;

	i = 1;
	nb = n;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbru(n);
	return (i);
}
