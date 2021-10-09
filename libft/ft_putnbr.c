/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:29:23 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:29:35 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	int	l;

	l = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		l += ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return (l);
}