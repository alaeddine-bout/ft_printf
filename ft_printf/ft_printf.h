/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:47:52 by about             #+#    #+#             */
/*   Updated: 2022/11/08 22:42:47 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<stdarg.h>

int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_puthexa(unsigned long nb, char format);
int	ft_putnbrun(unsigned int nb);
int	ft_printf(const char *s, ...);

#endif