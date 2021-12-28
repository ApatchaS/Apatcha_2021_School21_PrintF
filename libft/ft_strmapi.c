/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:34:15 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buf;
	unsigned int	buf_size;

	if (s == (void *)0)
		return ((void *)0);
	buf_size = 0;
	while (s[buf_size] != '\0')
		buf_size++;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	buf_size = 0;
	while (s[buf_size] != '\0')
	{
		buf[buf_size] = f(buf_size, s[buf_size]);
		buf_size++;
	}
	buf[buf_size] = '\0';
	return (buf);
}
