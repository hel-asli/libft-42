/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:08:27 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/19 14:31:21 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void del(void *content)
{
	free(content);
}

int main (void)
{
	t_list *root = ft_lstnew(ft_strdup("hamza"));
	t_list *new = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&root,new);
	for(t_list *curr = root; curr != NULL; curr = curr -> next)
	{
		printf("%s\n", (char *)curr->content);
	}
	ft_lstclear(&root , del);
}
