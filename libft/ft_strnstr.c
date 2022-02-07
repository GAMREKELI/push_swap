/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:44:07 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:44:09 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *dst, const char *src, size_t vol)
{
	char			*string1;
	char			*string2;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	string1 = (char *)dst;
	string2 = (char *)src;
	if (*string2 == '\0')
		return (string1);
	while (string1[i] != '\0' && (size_t)i < vol)
	{
		if (string1[i] == string2[0])
		{
			k = 1;
			while (src[k] != '\0' && dst[i + k] == src[k]
				&& (size_t)(i + k) < vol)
				k++;
			if (src[k] == '\0')
				return (&string1[i]);
		}
		++i;
	}
	return (NULL);
}
