/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:53:59 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 15:08:06 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *list;

	if (!lst || !del)
		return NULL;
	list = NULL;
	while (lst)
	{
		if (f)
			new = ft_lstnew(f(lst->content));
		else
			new = ft_lstnew(lst -> content);
		if (!new)
		{
			ft_lstclear(&list, del);
			return NULL;
		}
		ft_lstadd_back(&list , new);
		lst = lst-> next;
	}
	return list;
}

