/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:45:53 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:56 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t vol)
{
	unsigned char	*string;
	unsigned char	c;

	string = (unsigned char *) str;
	c = (unsigned char ) ch;
	while (vol != 0)
	{
		if (*string == c)
			return (string);
		string++;
		vol--;
	}
	return (NULL);
}
