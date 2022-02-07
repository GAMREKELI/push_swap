/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:43:56 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:43:58 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*src;
	char	c;

	c = (char) ch;
	src = (char *)str;
	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (src[i] == c)
			return (&src[i]);
		i--;
	}
	return (NULL);
}
