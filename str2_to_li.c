/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2_to_li.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:07:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 18:53:40 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem 	*str2_to_li(char *string)
{
	char	**str;
	t_elem	*elem;
	t_elem	*head;
	t_elem	*prev;
	int		i;

	if (!string || !string[0])
		return (NULL);
	str = ft_split(string, ' ');
	prev = NULL;
	i = 0;
	while (str[i])
	{
		if (i != 0)
			prev = elem;
		elem = elem_new(ft_atoi_e(str[i]), prev, NULL);
		if (i != 0)
			prev->next = elem;
		if (i == 0)
			head = elem;
		i++;
	}
	check_dupl(head);
	return (head);
}
