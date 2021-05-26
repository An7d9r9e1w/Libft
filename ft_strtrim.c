/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:55:30 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 12:51:37 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char const *set, char const c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	low;
	size_t	high;

	if (!s1 || !set)
		return (NULL);
	low = 0;
	while (contains(set, s1[low]))
		low++;
	high = ft_strlen(s1) - 1;
	while (contains(set, s1[high]) && high)
		high--;
	if (high > low)
		high += 2 - low;
	else
		high = 1;
	trimmed = malloc(sizeof(char) * high);
	if (trimmed)
		ft_strlcpy(trimmed, s1 + low, high);
	return (trimmed);
}
