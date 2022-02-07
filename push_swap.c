#include "push_swap.h"

void	ft_error(void)
{
	write(1, "ERROR\n", 6);
	exit(0);
}

void	ft_stack_null(t_all *stack)
{
	stack->stack_a = NULL;
	stack->stack_b = NULL;
}

int	main(int argc, char *argv[])
{
	t_stack		list;
	t_all		all;
	int i;

	ft_stack_null(&all);
	if (argc < 2)
		return (0);
	if(ft_parse(argc, argv))
	{
		ft_copying(argc, argv, &all);
	}
	while (all.stack_a)
	{
		printf("%d\n", all.stack_a->num);
		all.stack_a = all.stack_a->next;
	}
	return (0);
}

// ------ gcc -Wextra push_swap.c parse.c push_swap.h ./libft/libft.h ./libft/ft_atoi.c ft_init.c  
// ------ ft_check.c ./libft/ft_isdigit.c ./libft/ft_split.c ft_units.c 
