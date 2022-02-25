/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:04:49 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/15 22:36:10 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t vol)
{
	int				i;
	unsigned char	*string;

	string = (unsigned char *)str;
	i = 0;
	while (vol != 0)
	{
		string[i] = 0;
		vol --;
		i ++;
	}
}
