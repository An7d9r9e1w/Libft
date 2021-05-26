/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:30:44 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/18 19:43:27 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*end;
	ssize_t	cnt;

	if (!s)
		return ;
	end = s + ft_strlen(s);
	while (s < end)
	{
		cnt = write(fd, s, end - s);
		if (cnt < 0)
			return ;
		s += cnt;
	}
}
