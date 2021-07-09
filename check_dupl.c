/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:03:09 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/09 18:08:05 by asorrent         ###   ########.fr       */
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

void	check_dupl(t_elem *head)
{
	int	i;
	int	j;
	int *ar;

	ar = li_to_array(head);
	i = 0;
	while (ar[i])
	{
		j = i + 1;
		while (ar[j])
		{
			if (ar[i] == ar[j])
			{
				ft_putstr_fd("Error\n", 2);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
