/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:17:41 by pdursley          #+#    #+#             */
/*   Updated: 2022/02/23 19:17:41 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_null(t_all *stack, t_stack *list)
{
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	list->score = 0;
}
