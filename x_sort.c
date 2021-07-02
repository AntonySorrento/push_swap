/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:37:15 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/02 16:16:41 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*x_sort(t_elem *h_src)
{
	t_elem	*h_dst;
	t_elem	*new;
	t_elem	*here;

	h_dst = elem_new(h_src->nb, NULL, NULL);
	h_src = h_src->next;
	while (h_src)
	{
		new = elem_new(h_src->nb, NULL, NULL);
		if (new->nb < h_dst->nb)
			h_dst = elem_addstart(h_dst, new);
		else
		{
			here = h_dst;
			while(new->nb > here->nb && here->next && new->nb > here->next->nb)
				here = here->next;
			x_insert_after(here, new);
		}
		h_src = h_src->next;
	}
	return (h_dst);	
}
