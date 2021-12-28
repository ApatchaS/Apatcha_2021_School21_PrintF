/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 05:41:02 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:19 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	cntr;
	char	*str;
	char	*to_find;

	cntr = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	while (cntr < len && *str != '\0')
	{
		i = 0;
		while (*(to_find + i) && *(to_find + i) == *(str + i)
			&& cntr + i < len)
			i++;
		if (*(to_find + i) == '\0')
			return (str);
		str++;
		cntr++;
	}
	return ((void *)0);
}
