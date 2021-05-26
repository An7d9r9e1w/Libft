/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:14:01 by nnamor            #+#    #+#             */
/*   Updated: 2021/04/22 11:02:07 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_list(char **list, int	size)
{
	int	i;

	i = 0;
	while (i < size)
		free(list[i++]);
	free(list);
}

static char	*get_word_dup(char const *str, int index, int count)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (count + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < count)
		dup[i++] = str[index++];
	dup[i] = 0;
	return (dup);
}

static int	get_word_len(char const *str, char const c, int *index)
{
	int	len;
	int	i;

	len = 0;
	i = *index;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	*index = i;
	return (len);
}

static int	get_words_count(char const *str, char const c)
{
	int	count;

	if (!str)
		return (-1);
	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*++str && *str != c)
				;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		count;
	int		li;
	int		i;

	count = get_words_count(s, c);
	list = malloc(sizeof(char *) * (count + 1));
	if (!list)
		return (NULL);
	li = 0;
	i = 0;
	while (li < count)
	{
		while (s[i] && c == s[i])
			i++;
		list[li] = get_word_dup(s, i, get_word_len(s, c, &i));
		if (!list[li++])
		{
			free_list(list, li);
			return (NULL);
		}
	}
	list[count] = 0;
	return (list);
}
