/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:21:03 by jowoundi          #+#    #+#             */
/*   Updated: 2025/01/15 15:52:31 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

unsigned long	ft_hexlong(unsigned long nb)
{
	unsigned long		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
		count += ft_hexlong(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	else
	{
		write(1, "0x", 2);
		count += 2;
		count += ft_hexlong(ptr);
	}
	return (count);
}
