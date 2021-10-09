/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:25:19 by ameunier          #+#    #+#             */
/*   Updated: 2021/10/04 09:25:21 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_printl
{
	va_list	args;
	int		tlen;
}				t_printl;

int		ft_printf(const char *format, ...);
int		ft_read_conversion(t_printl *tab, const char *format, int i);
void	ft_print_char(t_printl *tab);
void	ft_print_string(t_printl *tab);
void	ft_print_ptn(t_printl *tab);
void	ft_print_num(t_printl *tab);
void	ft_print_uns_num(t_printl *tab);
void	ft_print_hexa(t_printl *tab, int c);
void	ft_print_pour(t_printl *tab);

#endif
