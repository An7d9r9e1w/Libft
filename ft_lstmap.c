/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:52:58 by nnamor            #+#    #+#             */
/*   Updated: 2021/05/15 09:16:15 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*get_new_el(t_list *lst,
				void *(*f)(void *), void (*del)(void *))
{
	t_list	*el;
	void	*cont;

	cont = f(lst->content);
	if (!cont)
		return (NULL);
	el = ft_lstnew(cont);
	if (!el)
		del(cont);
	return (el);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*cur;

	if (!lst || !f || !del)
		return (NULL);
	root = get_new_el(lst, f, del);
	if (!root)
		return (NULL);
	cur = root;
	lst = lst->next;
	while (lst)
	{
		cur->next = get_new_el(lst, f, del);
		if (!cur->next)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		cur = cur->next;
		lst = lst->next;
	}
	return (root);
}
