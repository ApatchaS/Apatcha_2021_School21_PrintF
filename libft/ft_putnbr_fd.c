/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:36:10 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:04 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr(long long int ln, int fd)
{
	char	tmp;

	if (ln < 10)
	{
		tmp = ln + '0';
		write(fd, &tmp, 1);
		return ;
	}
	ft_putnbr(ln / 10, fd);
	ft_putnbr(ln % 10, fd);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr(ln, fd);
	return ;
}
