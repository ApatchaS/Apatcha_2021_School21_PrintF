/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:34:27 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:23 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_ch;
	char	*tmp;
	char	*res;

	c_ch = c;
	tmp = (char *)s;
	res = (void *)0;
	while (*tmp)
	{
		if (*tmp == c_ch)
			res = tmp;
		tmp++;
	}
	if (c_ch == '\0')
		return (tmp);
	return (res);
}
