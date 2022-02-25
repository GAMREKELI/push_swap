/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:17:25 by pdursley          #+#    #+#             */
/*   Updated: 2022/02/23 19:17:25 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stack **stack, int flag)
{
	t_stack		*a;
	t_stack		*start;
	t_stack		*c;

	a = *stack;
	c = *stack;
	start = (*stack)->next;
	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	while (c->next != NULL)
		c = c->next;
	a->next = NULL;
	c->next = a;
	*stack = start;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	ft_rotate_b(t_stack **stack, int flag)
{
	t_stack		*a;
	t_stack		*start;
	t_stack		*c;

	a = *stack;
	c = *stack;
	start = (*stack)->next;
	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	while (c->next != NULL)
		c = c->next;
	a->next = NULL;
	c->next = a;
	*stack = start;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	ft_rotate_a_b(t_stack **stack_a, t_stack **stack_b, int flag)
{
	ft_rotate_a(stack_a, flag);
	ft_rotate_b(stack_b, flag);
	if (flag == 1)
		write(1, "rab\n", 4);
}
