/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:16:30 by about             #+#    #+#             */
/*   Updated: 2022/11/08 22:53:00 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_funtype(char c, va_list p)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar((char)va_arg(p, int));
	else if (c == 's')
		i = ft_putstr(va_arg(p, char *));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(p, int));
	else if (c == 'x')
		i = ft_puthexa(va_arg(p, unsigned int), 'x');
	else if (c == 'X')
		i = ft_puthexa(va_arg(p, unsigned int), 'X');
	else if (c == 'u')
		i = ft_putnbrun(va_arg(p, unsigned int));
	else if (c == 'p')
	{
		i = ft_putstr("0x");
		i += ft_puthexa(va_arg(p, unsigned long), 'x');
	}
	else if (c == '%')
		i = ft_putchar('%');
	else
		ft_putchar(c);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;
	int		j;

	j = 0;
	i = 0;
	va_start(p, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			i++;
			j += ft_funtype(s[i], p);
			i++;
		}
		else
		{
			j += ft_putchar(s[i]);
			i++;
		}
	}
	va_end(p);
	return (j);
}
