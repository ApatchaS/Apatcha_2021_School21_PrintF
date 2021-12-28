/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:09:06 by asippy            #+#    #+#             */
/*   Updated: 2021/10/22 20:08:06 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (new == (void *)0)
		return ;
	if (*lst)
	{
		iter = *lst;
		while (iter->next != (void *)0)
			iter = iter->next;
		iter->next = new;
	}
	else
		*lst = new;
	return ;
}
