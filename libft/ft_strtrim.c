/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:39:51 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/23 22:39:55 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*string;

	string = (char *)s1;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && s1[i])
			i++;
		while (ft_strchr(set, s1[j - 1]) && s1[j - 1] && j > i)
			j--;
		string = ft_calloc(((j - i) + 1), sizeof(char));
		if (string)
			ft_strlcpy(string, &s1[i], j - i + 1);
	}
	return (string);
}
