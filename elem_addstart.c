/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:49:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 17:09:51 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*elem_addstart(t_elem *head, t_elem *new)
{
	if (!new)
		return (head);
	new->prev = NULL;
	if (head)
	{
		new->next = head;
		head->prev = new;
	}
	else
		new->next = NULL;
	return (new);
}
