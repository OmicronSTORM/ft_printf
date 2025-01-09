/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:58 by jowoundi          #+#    #+#             */
/*   Updated: 2025/01/09 18:29:26 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_printf(const char *str, ...);
int	ft_percent(void);
int	ft_putstr(char	*str);
int	ft_putnbr(int nb);
int	ft_hexlower(unsigned long nb);
int	ft_hexupper(unsigned int nb);
int	ft_unsigned(unsigned int nb);
int	ft_putptr(unsigned long ptr);

#endif