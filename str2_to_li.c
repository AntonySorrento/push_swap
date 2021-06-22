/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2_to_li.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:07:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/22 08:34:09 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem 	*str2_to_li(char *string)
{
	char 	**str;
	t_elem	*elem;
	t_elem	*head;
	t_elem	*prev;
	int		i;
	int		nb;

	str = ft_split(string, ' ');
	prev = NULL;
	i = 0;
	while (str[i])
	{
		if (i != 0)
			prev = elem;
		nb = ft_atoi(str[i]);
		elem = elem_new(nb, prev, NULL);
		if (i != 0)
			prev->next = elem;
		if (i == 0)
			head = elem;
		i++;
	}
	return (head);
}
