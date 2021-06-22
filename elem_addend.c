/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:24:58 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/22 07:48:17 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	elem_aadend(t_elem *list, t_elem *new)
{
	t_elem	*temp;

	if (!list)
		return ;
	if (list == NULL)
		list = new;
	else
	{
		temp = elem_last(list);
		temp->next = new;
		new->prev = temp;
	}
}
