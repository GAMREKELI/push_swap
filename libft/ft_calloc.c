/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:35:56 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/15 22:35:58 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*pointer;
	char	*str;
	int		num_size;

	num_size = num * size;
	pointer = malloc(num_size);
	if (pointer == 0)
		return (NULL);
	if (pointer)
	{
		str = (char *)pointer;
		while (num_size != 0)
		{
			*str = 0;
			str++;
			num_size--;
		}
		return (pointer);
	}
	return (pointer);
}
