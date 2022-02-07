/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:58:15 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/16 19:58:16 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(const char *s, unsigned int start, size_t len)
{
	if (ft_strlen(s) < start)
		len = 0;
	else if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_check(s, start, len);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}	
	str[i] = '\0';
	return (str);
}
