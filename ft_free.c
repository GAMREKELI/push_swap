/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:17:15 by pdursley          #+#    #+#             */
/*   Updated: 2022/02/23 19:17:15 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack	*start;
	t_stack	*next;

	start = *stack;
	while (start)
	{
		next = start->next;
		free(start);
		start = next;
	}
	*stack = NULL;
}

void	ft_free(t_all *all)
{
	ft_free_stack(&all->stack_a);
	ft_free_stack(&all->stack_b);
}
