/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_li.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:18:44 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/22 08:26:22 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*str_to_li(char *str[])
{
	t_elem	*elem;
	t_elem	*head;
	t_elem	*prev;
	int		i;
	int		nb;
	
	i = 1;
	prev = NULL;
	while (str[i])
	{
		if (i != 1)
			prev = elem;
		nb = ft_atoi(str[i]);
		elem = elem_new(nb, prev, NULL);
		if (i != 1)
			prev->next = elem;
		if (i == 1)
			head = elem;
		i++;
	}
	return (head);
}
