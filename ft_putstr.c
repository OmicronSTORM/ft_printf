/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:21:03 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/26 17:39:40 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_lib.h"

int	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long long ptr)
{
	write(1, "0x", 2);
	ft_hexlower(ptr);
	return (ptr);
}
