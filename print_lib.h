/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:58 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/25 18:05:00 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_LIB
# define PRINT_LIB

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_printf(const char *str, ...);
int		ft_percent(void);
int		ft_putstr(char	*str);
int		ft_putnbr(int nb);
int		ft_hexlower(unsigned int nb);
int		ft_hexupper(unsigned int nb);
int		ft_unsigned(unsigned int nb);

#endif