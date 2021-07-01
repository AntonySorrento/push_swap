#include "push_swap.h"

void	printtab(int *tab)
{
	int	i;

	i = 0;
	printf("tab =");
	while (tab[i])
	{
		printf(" [%i]", tab[i]);
		i++;
	}
	printf("\n");
}
