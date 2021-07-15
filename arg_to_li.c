/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_li.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:36:44 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 19:11:27 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*arg_to_li(char **tab_str)
{
	char	*str;
	int		i;
	char	*temp;
	t_elem	*list;

	i = 1;
	while (tab_str[i])
	{
		temp = ft_strjoin(str, tab_str[i]);
		free(str);
		str = NULL;
		str = ft_strjoin(temp, " ");
		free(temp);
		temp = NULL;
		i++;
	}
	list = str2_to_li(str);
	free(str);
	str = NULL;
	return (list);
}
