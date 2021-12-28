/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:44:59 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:06:37 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	buf = (unsigned char *)malloc(count * size);
	if (buf == (void *)0)
		return ((void *)0);
	while (i < count * size)
		buf[i++] = '\0';
	return (buf);
}
