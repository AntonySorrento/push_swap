/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_insert_after.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:56:04 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 16:23:55 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	x_insert_after(t_elem *set, t_elem *new)
{
	t_elem	*temp;

	if (!set || !new)
		return ;
	new->prev = set;
	new->next = set->next;
	set->next = new;
	if (new->next)
	{
		temp = new->next;
		temp->prev = new;
	}
}
