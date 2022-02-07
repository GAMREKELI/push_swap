/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:07:31 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/26 23:07:32 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(lst || del))
		return ;
	tmp1 = *lst;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp2->next;
		ft_lstdelone(tmp2, del);
	}
	*lst = NULL;
}
