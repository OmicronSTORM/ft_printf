/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:11:55 by jowoundi          #+#    #+#             */
/*   Updated: 2025/01/15 15:48:14 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_hexlower(unsigned int nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
		count += ft_hexlower(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

int	ft_hexupper(unsigned int nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (nb >= 16)
		count += ft_hexupper(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}
