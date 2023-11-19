/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:11:06 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 09:43:31 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main (void)
{
	t_list *node;
	node = ft_lstnew("hamza");
	node-> next = ft_lstnew("hhejekwlr");
	node-> next -> next = ft_lstnew("dfl;as");
	t_list **p;
	p = &node;
	t_list *new;
	new = malloc(sizeof(t_list));
	new-> content = "dkfal;fj";
	ft_lsadd_front(p , new);
	t_list *c;
	c = node;
		
	while (c != NULL)
	{
		printf("%s\n" , c-> content);
		c = c-> next;
	}

}
*/
