/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:09:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/23 16:36:08 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (check_dont_start(argc, argv) == 1)
		return (0);
	data = data_init();
	data->a = arg_to_li(argv, data);
	tail(data, "a", 0);
	sort(data);
	ft_putstr_fd(data->move, 1);
	free_data(data);
	return (0);
}
