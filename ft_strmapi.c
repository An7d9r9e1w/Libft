/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:09:33 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 13:39:22 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*chg;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	chg = malloc(sizeof(char) * (len + 1));
	if (!chg)
		return (NULL);
	i = 0;
	while (i < len)
	{
		chg[i] = f(i, s[i]);
		i++;
	}
	chg[len] = 0;
	return (chg);
}
