#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>      ///------------> delete
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				num;
	int				index;
	int				flag;
	struct s_stack	*next;
	struct s_stack	*next_st;

}				t_stack;


typedef struct s_all
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
	int		min_a;
	int		max_a;
	int		med;
	int		len_a;
	int		len_b;
}				t_all;


void	ft_error(void);
int		ft_parse(int argc, char **argv);
void	ft_init(t_list *stack, t_all *all);
void	ft_copying(int argc, char **argv, t_all *all);
int		ft_count(char *str);
int64_t ft_atoii(const char *str);
int		ft_checkk(unsigned long result, int sign);
void	ft_min_max(int64_t res, char **mass_str);
void	ft_clean_split(char **mass);
#endif