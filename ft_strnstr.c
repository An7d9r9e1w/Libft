/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 23:10:07 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 11:28:32 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substr(const char *str, const char *sub, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && *sub && str[i] == *sub)
	{
		i++;
		sub++;
	}
	return (!*sub && *(sub - 1) == str[i - 1]);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == *needle && substr(haystack + i, needle, len - i))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
