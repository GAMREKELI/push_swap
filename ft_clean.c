#include "push_swap.h"

void	ft_clean_split(char **mass)
{
	int	i;

	i = -1;
	while(mass[++i])
		free(mass[i]);
}