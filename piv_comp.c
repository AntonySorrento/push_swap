/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piv_comp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:48:31 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 11:57:53 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	piv_comp(t_elem *head, int pivot, char comp, int ps)
{
	int lm;

	lm = 0;
	if (comp == '>')
	{ 
		while(head)
		{
			if (head->nb > pivot && head->ps == ps)
				lm = 1;
			head = head->next;
		}
	}
	if (comp == '<')
	{
		while(head)
		{
			if (head->nb <= pivot && head->ps == ps)
				lm = 1;
			head = head->next;
		}
	}
	return (lm);
}
