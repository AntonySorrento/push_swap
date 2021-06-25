/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:09:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/25 18:24:58 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data *data; 
	
	data = data_init();
	if (argc > 2)
		data->a = str_to_li(argv);
	if (argc == 2)
		data->a = str2_to_li(argv[1]);

	data->b = str2_to_li("10");
	printf("avant mouvement\n");
	printf("A : ");
	printli(data->a);
	printf("B : ");
	printli(data->b);
	tail(data, "ab", 1);
	rrrotate(data, "b");
	printf("après rrrotate list b\n");
	printf("A : ");
	printli(data->a);
	printf("B : ");
	printli(data->b);
	tail(data, "ab", 1);

	/*
	data->b = swap(data->b);
	data->a = swap(data->a);
	printf("après sa et sb\n");
	printf("A : ");
	printli(data->a); 
	printf("B : ");
	printli(data->b);
	tail(data, "ab", 1);
	push_a(data);
	printf("après push A->B\n");
	printf("A : ");
	printli(data->a); 
	printf("B : ");
	printli(data->b);
	tail(data, "ab", 1);
	push_b(data);
	printf("après push B->A\n");
	printf("A : ");
	printli(data->a); 
	printf("B : ");
	printli(data->b);
	tail(data, "ab", 1);*/

	return (0);

}
/*
{
	if (argc > 2)
		convertir argv en liste chainee;
	if (argc == 2)
		faire un split puis convertir en liste chainée;
	if (argc == 1)
		erreur;

	return (0);
}*/
