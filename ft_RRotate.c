/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_RRotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:17:28 by pdursley          #+#    #+#             */
/*   Updated: 2022/02/23 19:17:28 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverserotate_a(t_stack **stack, int flag)
{
	t_stack		*b;
	t_stack		*c;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	c = *stack;
	while (c->next->next != NULL)
		c = c->next;
	b = c->next;
	c->next = NULL;
	b->next = *stack;
	*stack = b;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	ft_reverserotate_b(t_stack **stack, int flag)
{
	t_stack		*b;
	t_stack		*c;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	c = *stack;
	while (c->next->next != NULL)
		c = c->next;
	b = c->next;
	c->next = NULL;
	b->next = *stack;
	*stack = b;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	ft_ft_reverserotate_a_b(t_stack **stack_a, t_stack **stack_b, int flag)
{
	ft_reverserotate_a(stack_a, flag);
	ft_reverserotate_b(stack_b, flag);
	if (flag == 1)
		write(1, "rrab\n", 5);
}
