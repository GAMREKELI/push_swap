/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:08:34 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:32 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t vol)
{
	int		i;
	char	*string[2];

	i = 0;
	string[0] = (char *)dst;
	string[1] = (char *)src;
	if (string[0] < string[1])
	{
		while (vol != 0)
		{
			string[0][i] = string[1][i];
			vol --;
			i ++;
		}
	}
	else if (string[0] > string[1])
	{
		i = vol;
		while (i != 0)
		{
			string[0][i - 1] = string[1][i - 1];
			i--;
		}
	}
	return (dst);
}
