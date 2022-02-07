/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:08:09 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/26 23:08:11 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*tmp;
	void	*cont;

	if (!lst || !f)
		return (NULL);
	tmp = lst;
	new = NULL;
	head = ft_lstnew(f(tmp->content));
	tmp = tmp->next;
	while (tmp)
	{
		cont = f(tmp->content);
		new = ft_lstnew(cont);
		if (!new)
		{
			ft_lstclear(&head, del);
			break ;
		}
		ft_lstadd_back(&head, new);
		tmp = tmp->next;
	}
	return (head);
}
