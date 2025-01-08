/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:21:03 by jowoundi          #+#    #+#             */
/*   Updated: 2025/01/08 18:07:57 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	if (!ptr)
		ptr = ft_putstr("(nil)");
	else
	{
		write(1, "0x", 2);
		ft_hexlower(ptr);	
	}
	return (ptr);
}
