/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:45:44 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:45 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *str1, const void *str2, size_t vol)
{
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)str1;
	string2 = (unsigned char *)str2;
	while (vol != 0)
	{
		if (string1 == string2)
			return (0);
		if (*string1 != *string2)
			return (*string1 - *string2);
		string1++;
		string2++;
		vol--;
	}
	return (0);
}
