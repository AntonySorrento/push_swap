/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 06:53:35 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 16:01:00 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	elem_del(t_elem *elem)
{
	t_elem	*prev;
	t_elem	*next;

	if (!elem)
		return ;
	if (elem->prev)
		prev = elem->prev;
	if (elem->next)
		next = elem->next;
	if (elem->prev)
		prev->next = elem->next;
	if (elem->next)
		next->prev = elem->prev;
	free(elem);
	elem = NULL;
}
