/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:06:00 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:24 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string, int ch, size_t vol)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) string;
	while (vol != 0)
	{
		str[i] = ch;
		i++;
		vol--;
	}
	return (string);
}
