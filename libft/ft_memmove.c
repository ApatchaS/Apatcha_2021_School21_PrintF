/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:41:00 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:09:44 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)src;
	if (dst == (void *)0 && src == (void *)0)
		return ((void *)0);
	if (dst > src)
	{	
		while (len-- != 0)
			*((unsigned char *)dst + len) = *((unsigned char *)tmp + len);
	}
	else
	{
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)tmp + i);
			i++;
		}
	}
	return (dst);
}
