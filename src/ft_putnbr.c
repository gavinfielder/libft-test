/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:44:41 by gfielder          #+#    #+#             */
/*   Updated: 2019/02/13 15:55:01 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_INT_MIN -2147483648

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == MY_INT_MIN)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
	else
		ft_putchar('0' + nb);
}
