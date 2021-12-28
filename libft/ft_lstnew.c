/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:52:08 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:08:41 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*buf;

	buf = (t_list *)malloc(sizeof(t_list));
	if (buf == (void *)0)
		return ((void *)0);
	buf->content = content;
	buf->next = (void *)0;
	return (buf);
}
