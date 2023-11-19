/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 01:34:18 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 11:23:36 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	if (!lst)
		return 0;
	i = 0;
	while (lst != NULL)
	{
		lst = lst-> next;
		i++;
	}
	return i;
}
/*
int main (void)
{
	t_list *root = NULL;
	t_list *new = malloc(sizeof(t_list));
	int p = 55;
	new->content = (int *)&p;
	ft_lstadd_front(&root, new);
	int n = ft_lstsize(root);
	printf("%d\n", n);
	printf("%d\n", *((int *)(root->content)));
}
*/
