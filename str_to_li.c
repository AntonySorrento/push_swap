/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2_to_li.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:07:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 16:22:26 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		free(str[i]);
		str[i] = NULL;
	}
	free(str);
	str = NULL;
}

t_elem	*str_to_li(char *string, t_data *data)
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
	free_str(str);
	return (head);
}
