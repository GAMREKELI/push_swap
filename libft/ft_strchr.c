/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:44:40 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:45:13 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *str, int ch)
{
	char			*string;
	unsigned char	c;

	c = (char)ch;
	string = (char *)str;
	while (*string != c)
	{
		if (*string == '\0')
		{
			return ((char *) NULL);
		}
		string++;
	}
	return (string);
}
