/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:39:53 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/22 14:31:24 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	int				count;

	count = count_digits(n);
	if (n < 0)
		count++;
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[count] = 0;
	if (n < 0)
	{
		str[0] = '-';
		un = -n;
	}
	else
		un = n;
	while (un)
	{
		str[--count] = un % 10 + '0';
		un /= 10;
	}
	return (str);
}
