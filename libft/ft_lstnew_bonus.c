/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:08:16 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/26 23:08:18 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*new_c;

	new_c = (t_list *)malloc(sizeof(t_list));
	if (!(new_c))
		return (NULL);
	if (!content)
		new_c->content = NULL;
	else
		new_c -> content = content;
	new_c -> next = NULL;
	return (new_c);
}
