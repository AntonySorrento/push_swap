/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:24:58 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/25 17:50:14 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*return the new tail of the list*/

t_elem	*elem_addend(t_elem *tail, t_elem *new)
{
//	t_elem	*temp;

	if (tail == NULL)
		tail = new;
	else
	{
		tail->next = new;
		new->prev = tail;
	}
	new->next = NULL;
	return (new);
}