/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:49:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/25 15:31:38 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*elem_addstart(t_elem *head, t_elem *new)
{
	if (!new)
		return (head);
	new->prev = NULL;
	if (head)
		new->next = head;
	else
		new->next = NULL;
	return (new);
}
