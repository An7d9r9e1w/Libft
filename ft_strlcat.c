/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:44:00 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 18:36:57 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srcsize;
	size_t	i;

	dstlen = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (dstsize > dstlen + 1)
	{
		i = dstlen;
		while (*src && i < dstsize - 1)
			dst[i++] = *src++;
		dst[i] = 0;
	}
	if (dstsize > dstlen)
		dstsize = dstlen;
	return (dstsize + srcsize);
}
