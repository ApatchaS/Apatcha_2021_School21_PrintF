/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:55:47 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:08 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	str_size;

	if (s == (void *)0)
		return ;
	str_size = 0;
	while (s[str_size] != '\0')
		str_size++;
	write(fd, s, str_size);
	return ;
}
