/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:09:49 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/24 08:29:16 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_elem *a;
	t_elem *b;// 
	(void) argc;
	
	if (argc > 2)
		a = str_to_li(argv);
	if (argc == 2)
		a = str2_to_li(argv[1]);

	b = str2_to_li("1 2 3 4");
	printf("avant mouvement\n");
	printli(a); 
	printf("\n");
	printli(b);
	b = swap(b);
	a = swap(a);
	printf("après mouvement\n");
	printli(a); 
	printf("\n");
	printli(b);

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
