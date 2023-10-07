/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:44:04 by about             #+#    #+#             */
/*   Updated: 2022/11/08 22:49:39 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_puthexa(unsigned long nb, char format)
{
	char	*lower;
	char	*upper;
	int		i;

	i = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_puthexa(nb / 16, format);
		i += ft_puthexa(nb % 16, format);
	}
	else if (nb >= 0 && nb <= 9)
	{
		i += ft_putchar(nb + '0');
	}
	else if (format == 'x')
		i += ft_putchar(lower[nb]);
	else if (format == 'X')
		i += ft_putchar(upper[nb]);
	return (i);
}
