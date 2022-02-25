/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:39:00 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/23 22:39:01 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_writing_word(char *dst, char const *src, char ch)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while ((src[i] == ch || src[i] == '\0') == 0)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

static int	ft_wordlen(char const *w, char c)
{
	int	count;

	count = 0;
	while ((*w == c || *w == '\0') == 0)
	{
		w++;
		count++;
	}
	return (count);
}

static int	kol_word(char const *str, char ch)
{
	int	kol;

	kol = 0;
	while (*str != '\0')
	{
		if (*str != ch)
		{
			kol++;
			while ((*str == ch || *str == '\0') == 0)
				str++;
		}
		else
		{
			str++;
		}
	}
	return (kol);
}

static	char	**ft_result_res(char **res, char c, char const *s)
{
	unsigned int	i;
	unsigned int	k;
	char			*word;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if ((s[i] == c || s[i] == '\0') == 1)
			i++;
		else
		{
			word = (char *)malloc((ft_wordlen(&s[i], c) + 1) * sizeof(char));
			if (!word)
				return (NULL);
			res[++k] = ft_writing_word(word, &s[i], c);
			while ((s[i] == c || s[i] == '\0') == 0)
				i++;
		}
	}
	res[++k] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n;

	if (!s)
		return (NULL);
	n = kol_word(s, c);
	if (!n)
		return (NULL);
	res = (char **)malloc((n + 1) * sizeof(char *));
	if (res == 0)
		return (NULL);
	res = ft_result_res(res, c, s);
	return (res);
}
