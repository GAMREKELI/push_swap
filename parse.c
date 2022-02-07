#include "push_swap.h"

int	ft_count(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			count ++;
			while ((str[i] != ' ' && str[i] != '\t') && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}
