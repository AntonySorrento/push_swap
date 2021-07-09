/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piv_comp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:48:31 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 17:13:46 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	piv_comp(t_elem *head, int pivot, char comp)
{
	if (comp == 'u')
	{ 
		while(head)
		{
			if (head->nb >= pivot)
				return (1);
			head = head->next;
		}
	}
	if (comp == 'l')
	{
		while(head)
		{
			if (head->nb <= pivot)
				return (1);
			head = head->next;
		}
	}
	return (0);
}
