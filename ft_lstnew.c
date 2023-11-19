/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:48:39 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 12:21:17 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if(!node)
		return NULL;
	node->content = content;
	node-> next = NULL;
	return node;
}

/*
int main ()
{
	char *str = "hello";
	t_list *node;
	t_list *c;


	node= ft_lstnew("hello");
	node-> next = ft_lstnew("hellkjd ");
	node-> next-> next = ft_lstnew("hhkjfds");
	node-> next-> next-> next = ft_lstnew("hhkdjskfljasdfj;jfds");
	c =  node;
	while (c != NULL)
	{
		printf("%s\n", (char *)c->content);
		c = c -> next;
	}

}
*/
