/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_li.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:36:44 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/16 17:57:15 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*arg_to_li(char **tab_str, t_data *data)
{
	char	*str;
	int		i;
	char	*temp;
	t_elem	*list;

	check_error(tab_str, data);
	i = 1;
	str = malloc(2);
	ft_strcpy(str, " ");
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
	list = str2_to_li(str, data);
	free(str);
	str = NULL;
	return (list);
}
