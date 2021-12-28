/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:21:03 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:27 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_ch;
	char	*tmp;

	c_ch = c;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c_ch)
			return (tmp);
		tmp++;
	}
	if (c_ch == '\0')
		return (tmp);
	return ((void *)0);
}
