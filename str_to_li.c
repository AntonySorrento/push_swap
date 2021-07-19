/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2_to_li.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:07:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/19 20:55:26 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem 	*str_to_li(char *string, t_data *data)
{
	char	**str;
	t_elem	*elem;
	t_elem	*head;
	t_elem	*prev;
	//	printf("str[a] = %s\n", str[a]); ///
	int		i;

	if (!string || !string[0])
		return (NULL);

	str = ft_split(string, ' ');
	prev = NULL;
	i = -1;
	while (str[++i])
	{
		if (i != 0)
			prev = elem;
		elem = elem_new(ft_atoi_e(str[i], data), prev, NULL);
		if (i != 0)
			prev->next = elem;
		if (i == 0)
			head = elem;
	}
	check_dupl(head, data);
	i = -1;
	while (str[++i])
	{ 
		free(str[i]);
		str[i] = NULL;
	}
	free(str);
	str = NULL;
	return (head);
}
