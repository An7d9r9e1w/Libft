/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:05:09 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/28 17:32:15 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			str[12];
	unsigned int	un;
	short			count;

	str[11] = 0;
	str[10] = '0';
	count = 10 + n != 0;
	if (n < 0)
		un = -n;
	else
		un = n;
	while (un && --count)
	{
		str[count] = un % 10 + '0';
		un /= 10;
	}
	str[count - 1] = '-';
	if (n < 0)
		count--;
	ft_putstr_fd(str + count, fd);
}
