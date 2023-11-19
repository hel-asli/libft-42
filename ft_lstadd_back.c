/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:41:52 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 14:29:59 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst,t_list *new)
{
	t_list *last;
	if (lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			last = ft_lstlast(*lst);
			last-> next = new;
		}
	}
}
/*
int main (void)
{
	t_list *root = NULL; 
	t_list *new = malloc(sizeof(t_list));
	if (!new)
		return 0;
	int p = 1337;
	new-> content = &p;
	new->next = NULL;

	ft_lstadd_back(&root, new);

	for (t_list *c = root; c != NULL ; c = c->next)
	{
		printf("%d\n", *((int *)(c -> content)));
	}
}
*/
