/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 07:00:54 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/21 08:15:53 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_clear(t_elem *list)
{
	t_elem	*temp;

	if (!list)
		return ;
	while (list)
	{
		temp = list;
		if (list->next)
			list = list->next;
		elem_del(temp);
	}
}
