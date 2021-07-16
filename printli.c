#include "push_swap.h"

void	printli(t_elem *elem)
{
	int nb;
	int sec;

	sec = 0;
	nb = 0;
	while (elem && sec < 101)
	{
		nb = elem->nb;
		printf("[%i] ", nb);
		elem = elem->next;
		sec++;
	}
	printf("\n");
}

void	print2li(t_data *data)
{
	printf("A = ");
	printli(data->a);
	printf("B = ");
	printli(data->b);
}

void    printli_rw(t_elem *elem)
{
   while (elem)
   	{
       printf("[%i] ", elem->nb);
	   elem = elem->prev;
	}
	printf("\n");
}

void	print3li(t_data *data)
{
	printf("A forward =");
	printli(data->a);
	printf("A rewind = ");
	printli_rw(data->a9);
	printf("B forward =");
	printli(data->b);
	printf("B rewind = ");
	printli_rw(data->b9);
	tail(data, "ab", 1);
}
