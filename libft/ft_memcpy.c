/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:32:42 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:39 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *str, const void *src, size_t vol)
{
	unsigned char	*string_1;
	unsigned char	*string_2;

	string_1 = (unsigned char *) str;
	string_2 = (unsigned char *) src;
	if (!vol || src == str)
		return (str);
	while (vol != 0)
	{
		*string_1 = *string_2;
		string_1++;
		string_2++;
		vol--;
	}
	return (str);
}
