/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:09:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/07/07 22:35:59 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data *data;

	check_error(argv);
	data = data_init();
	if (argc > 2)
		data->a = str_to_li(argv);
	if (argc == 2)
		data->a = str2_to_li(argv[1]);
	printf("A : ");
	printli(data->a);
	t_elem *tri = x_sort(data->a);
	t_elem *pivot = x_pivot(tri, elem_last(tri));
	printf("pivot = [%i]\n", pivot->nb);
	sort_pivot(data, pivot->nb);
	printf("après tri : ");
	printf("A : ");
	printli(data->a);
	printf("B : ");
	printli(data->b);


	return (0);
}
