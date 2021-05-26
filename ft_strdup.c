/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:38:11 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 11:38:23 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	size_t	size;

	size = ft_strlen(s1) + 1;
	cp = malloc(sizeof(char) * size);
	if (!cp)
		return (NULL);
	ft_strlcpy(cp, s1, size);
	return (cp);
}
