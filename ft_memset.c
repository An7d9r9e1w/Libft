/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:00:59 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 11:07:14 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	unsigned char	uc;

	tmp = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len > 0)
	{
		*tmp++ = uc;
		len--;
	}
	return (b);
}
