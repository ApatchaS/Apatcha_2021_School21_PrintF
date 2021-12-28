/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:15:25 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:43 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	buf_size;

	if (s == (void *)0)
		return ;
	buf_size = 0;
	while (s[buf_size] != '\0')
	{
		f(buf_size, &s[buf_size]);
		buf_size++;
	}
	return ;
}
