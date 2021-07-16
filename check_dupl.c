/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:03:09 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 17:09:43 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*li_to_array(t_elem *head)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int)*elem_hmany(head));
	if (!tab)
		return (NULL);
	i = 0;
	while (head)
	{
		tab[i] = head->nb;
		head = head->next;
		i++;
	}
	return (tab);
}

void	check_dupl(t_elem *head, t_data *data)
{
	int	i;
	int	j;
	int *tab;
	int e;
	int len;

	tab = li_to_array(head);
	i = 0;
	e = 0;
	len = elem_hmany(head);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				e = 1;
			j++;
		}
		i++;
	}
	free(tab);
	tab = NULL;
	if (e == 1)
		error(data);
}
