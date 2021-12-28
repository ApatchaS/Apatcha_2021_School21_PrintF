/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:51:57 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:33 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find_left(char const *s1, char const *set)
{
	size_t	left_ind;
	size_t	set_ind;

	left_ind = 0;
	if (set == (void *)0)
		return (left_ind);
	while (s1[left_ind] != '\0')
	{
		set_ind = 0;
		while (set[set_ind] != '\0' && set[set_ind] != s1[left_ind])
			set_ind++;
		if (set[set_ind] == '\0')
			break ;
		left_ind++;
	}
	return (left_ind);
}

static size_t	ft_find_right(char const *s1, char const *set)
{
	size_t	right_ind;
	size_t	set_ind;
	size_t	len_size;

	len_size = 0;
	while (s1[len_size] != '\0')
		len_size++;
	right_ind = len_size;
	if (set == (void *)0 || len_size == 0)
		return (right_ind);
	while (--right_ind > 0)
	{
		set_ind = 0;
		while (set[set_ind] != '\0' && set[set_ind] != s1[right_ind])
			set_ind++;
		if (set[set_ind] == '\0')
			break ;
	}
	return (right_ind);
}

static	void	ft_fill(char const *s1, char *buf, size_t iter, size_t buf_size)
{
	size_t	i;

	i = 0;
	while (i < buf_size)
	{
		buf[i] = s1[iter];
		i++;
		iter++;
	}
	buf[i] = '\0';
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left_ind;
	size_t	right_ind;
	size_t	buf_size;
	size_t	iter;
	char	*buf;

	if (s1 == (void *)0)
		return ((void *)0);
	left_ind = ft_find_left(s1, set);
	right_ind = ft_find_right(s1, set);
	iter = 0;
	if (left_ind > right_ind)
		buf_size = 0;
	else
	{
		iter = left_ind;
		buf_size = right_ind - left_ind + 1;
	}
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	if (buf == (void *)0)
		return ((void *)0);
	ft_fill(s1, buf, iter, buf_size);
	return (buf);
}
