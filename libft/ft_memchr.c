/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 04:09:15 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:08:51 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_ch;
	unsigned char	*tmp;

	c_ch = c;
	tmp = (unsigned char *)s;
	while (n-- != 0)
	{
		if (*tmp == c_ch)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}
