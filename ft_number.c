/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:11:55 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/27 15:56:15 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (nb);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (nb);
}

int	ft_unsigned(unsigned int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (nb);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (nb);
}

int	ft_hexlower(unsigned int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_hexlower(nb / 16);
	ft_putchar(hex[nb % 16]);
	return (nb);
}

int	ft_hexupper(unsigned int nb)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb >= 16)
		ft_hexupper(nb / 16);
	ft_putchar(hex[nb % 16]);
	return (nb);
}
