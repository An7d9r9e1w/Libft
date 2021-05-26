/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:04:45 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 15:01:19 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	cat = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cat)
		return (NULL);
	i = 0;
	while (*s1)
		cat[i++] = *s1++;
	while (*s2)
		cat[i++] = *s2++;
	cat[i] = 0;
	return (cat);
}
