/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:32:19 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:09:58 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	str_size;

	if (s == (void *)0)
		return ;
	str_size = 0;
	while (s[str_size] != '\0')
		str_size++;
	write(fd, s, str_size);
	write(fd, "\n", 1);
	return ;
}
