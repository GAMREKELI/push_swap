/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:38:32 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/23 22:38:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)n * (-1);
	}
	else
	{
		number = (unsigned int)n;
	}
	if (number >= 10)
		ft_putnbr_fd((number / 10), fd);
	ft_putchar_fd((number % 10 + '0'), fd);
}
