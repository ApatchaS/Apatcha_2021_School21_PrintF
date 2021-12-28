/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:29:44 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:40 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	line_size;
	unsigned int	buf_size;
	unsigned int	iterator;
	char			*buf;

	if (s == (void *)0)
		return ((void *)0);
	line_size = 0;
	while (s[line_size] != '\0')
		line_size++;
	if (start + len <= line_size)
		buf_size = len;
	else if (start > line_size)
		buf_size = 0;
	else
		buf_size = line_size - start;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	iterator = -1;
	while (++iterator < buf_size)
		buf[iterator] = s[start + iterator];
	buf[iterator] = '\0';
	return (buf);
}
