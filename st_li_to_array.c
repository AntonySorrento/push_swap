/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_li_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 06:50:21 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/01 07:59:08 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*st_li_to_array(t_elem *list)
{
	int	*ar;
	int	nb;
	int	i;

	i = 0;
	nb = elem_hmany(list);
	ar = malloc(sizeof(int)*nb);
	if (!ar)
		return (NULL);
	while (list && i < nb)
	{
		ar[i] = list->nb;
		list = list->next;
		i++;
	}
	ar[i] = 0;
	return (ar);
}
