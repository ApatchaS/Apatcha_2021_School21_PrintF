/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:54:38 by asippy            #+#    #+#             */
/*   Updated: 2021/12/28 01:50:11 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_char(t_print *form)
{
	int		res;
	char	ch;

	res = 1;
	ch = (char)va_arg(form->arg, int);
	if (form->width > res)
		res = form->width;
	ft_out_char_string(form, &ch, res, 1);
	return (res);
}
