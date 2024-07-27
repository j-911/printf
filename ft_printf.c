/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabanna <jabanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 11:47:47 by jabanna           #+#    #+#             */
/*   Updated: 2024/06/21 10:41:31 by jabanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	check(va_list args, const char index)
{
	int	count;

	count = 0;
	if (index == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (index == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (index == 'p')
		count += ft_putptr(va_arg(args, unsigned long long));
	else if (index == 'd' || index == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (index == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (index == 'x' || index == 'X')
		count += ft_puthex(va_arg(args, unsigned int), index);
	else if (index == '%')
		count += ft_putpercent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += check(args, format[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_printf(" NULL %s NULL \n", NULL);
	j = printf(" NULL %s NULL \n", NULL);
	printf("%d\n%d", i, j);
}*/
