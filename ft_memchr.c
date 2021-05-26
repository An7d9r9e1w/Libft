/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:55:42 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/20 21:53:59 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	unsigned char	uc;

	sc = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
		if (*sc++ == uc)
			return ((void *)(sc - 1));
	return (NULL);
}
