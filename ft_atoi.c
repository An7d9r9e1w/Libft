/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:11:03 by nnamor            #+#    #+#             */
/*   Updated: 2021/05/25 21:55:10 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	num;
	char		sign;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = *str == '-';
	if (*str == '-' || *str == '+')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (num > 922337203685477580l || (num == 922337203685477580l
				&& (*str > '8' || (!sign && *str > '7'))))
			return (- !sign);
		num = num * 10 + *str++ - '0';
	}
	if (sign)
		num = -num;
	return (num);
}
