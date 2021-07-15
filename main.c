/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:09:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/15 19:10:31 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data *data;

	if (argc == 1)
		return (0);
//	check_error(argv);
	data = data_init();
/*	if (argc > 2)
		data->a = str_to_li(argv);
	if (argc == 2)
		data->a = str2_to_li(argv[1]);*/
	data->a = arg_to_li(argv);
	tail(data, "a", 0);
	printli(data->a);
	sort(data);
	ft_putstr_fd(data->move, 1);
//	free_data(data);
	return (0);
}
