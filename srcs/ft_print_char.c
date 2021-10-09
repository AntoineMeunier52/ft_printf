/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:19:29 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:20:26 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_char(t_printl *tab)
{
	char	c;

	c = (char)va_arg(tab->args, int);
	write(1, &c, 1);
	tab->tlen += 1;
}
