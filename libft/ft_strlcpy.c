/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:17:30 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/14 21:44:55 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t vol)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (vol == 0)
		return (len);
	while (src[i] != '\0' && (vol - 1) != 0)
	{
		dst[i] = src[i];
		i++;
		vol--;
	}
	dst[i] = '\0';
	return (len);
}
