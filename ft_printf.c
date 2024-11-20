/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:35:57 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/20 19:03:31 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_lib.h"

int	conv(va_list args, const char caract)
{
	int	type_conv;
	
	type_conv = 0;
	if (caract == 'c')
		type_conv += ft_putchar(va_arg(args, int));
	else if (caract == 's')
		type_conv += ft_putstr(va_arg(args, char *));
	else if (caract == 'd' || caract == 'i')
		type_conv += ft_putnbr(va_arg(args, int));
	else if (caract == 'u')
		type_conv += ft_unsigned(va_arg(args, unsigned int));
	else if (caract == 'x' || caract == 'X')
		type_conv += ft_hex(va_arg(args, unsigned int), caract);
	else if (caract == 'p')
		type_conv += ft_putptr(va_arg(args, unsigned long long));
	else if (caract == '%')
		type_conv += ft_percent();
	return (type_conv);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	print;
	va_list	args;

	i = 0;
	print = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print += conv(args, str[i + 1]);
			i++;
		}
		else
			print += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print);
}