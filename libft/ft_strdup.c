/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:52:32 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:33 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*buf;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	buf = (char *)malloc(sizeof(char) * (i + 1));
	if (buf == (void *)0)
		return ((void *)0);
	while (j <= i)
	{
		buf[j] = s1[j];
		j++;
	}
	return (buf);
}
