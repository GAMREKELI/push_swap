#include "push_swap.h"

int	ft_contein(t_stack *stack, int num)
{
	while (stack)
	{
		if(stack->num == num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	ft_initiation(t_stack *element, int number, int flag)
{
	element->num = number;
	element->index = flag;
	element->next = NULL;
	element->next_st = NULL;

}

void	ft_init_push(t_stack **stack, int number, t_all *all, char **mass)
{
	t_stack	*element;
	t_stack	*last;

	last = *stack;
	if (!ft_contein(*stack, number))
	{
		ft_clean_split(mass);
		ft_error();
	}
	if (!(element = (t_stack *)malloc(sizeof(t_stack))))
		ft_error();
	ft_initiation(element, number, -1);
	if (!last)
	{
		*stack = element;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = element;
	last->next_st = element;
}

void	ft_copying(int argc, char **argv, t_all *all)
{
	int		i;
	int		j;
	char	**mass_str;

	i = 1;
	while (i < argc)
	{
		j = -1;
		if (!(mass_str = ft_split(argv[i], ' ')))
			ft_error();
		while (mass_str[++j])
		{
			ft_min_max(ft_atoii(mass_str[j]), mass_str);
			ft_init_push(&(all->stack_a), ft_atoii(mass_str[j]), all, mass_str);
			free(mass_str[j]);
		}
		free(mass_str);
		i++;	
	}
}
