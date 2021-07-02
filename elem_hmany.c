/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 08:15:00 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/02 17:19:36 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	elem_hmany(t_elem *list)
{
	int	many;

	many = 0;
	while (list != NULL)
	{
		list = list->next;
		many++;
	}
	return (many);
}
