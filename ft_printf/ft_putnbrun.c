/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:21:24 by about             #+#    #+#             */
/*   Updated: 2022/11/08 21:32:26 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbrun(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
	{
		i += ft_putchar(nb + 48);
	}
	else if (nb > 9)
	{
		i += ft_putnbrun(nb / 10);
		i += ft_putnbrun(nb % 10);
	}
	return (i);
}
