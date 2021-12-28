/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:35:35 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:57 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_cntr;
	size_t	dst_cntr;

	src_cntr = 0;
	dst_cntr = 0;
	while (src[src_cntr] != '\0')
		src_cntr++;
	if (dst != (void *)0)
		while (dst[dst_cntr] != '\0')
			dst_cntr++;
	if (dstsize <= dst_cntr)
		return (dstsize + src_cntr);
	dst += dst_cntr;
	dstsize -= dst_cntr;
	while (*src != '\0' && dstsize-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_cntr + src_cntr);
}
