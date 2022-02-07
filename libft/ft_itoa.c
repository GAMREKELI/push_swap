/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:37:28 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/26 23:06:27 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int	len_num(int num)
{
	int			len;
	long int	k;

	len = 1;
	k = 10;
	if (num < 0)
		len ++;
	while ((num / k) != 0)
	{
		k *= 10;
		len ++;
	}
	return (len);
}

static char	*result(char *number, long int kol, long int num, int i)
{
	if (num < 0)
	{
		number[i] = '-';
		num = num * (-1);
		i++;
	}
	while (kol)
	{
		number[i] = num / kol + '0';
		num = num % kol;
		kol = kol / 10;
		i++;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	long int	num;
	long int	kol;
	char		*number;
	int			i;

	kol = 10;
	num = n;
	i = 0;
	number = ft_calloc(len_num(n) + 1, sizeof(char));
	if (number == NULL)
		return (NULL);
	while (num / kol != 0)
		kol *= 10;
	kol = kol / 10;
	number = result(&number[i], kol, num, i);
	return (number);
}
