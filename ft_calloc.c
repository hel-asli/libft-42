/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:04:32 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/15 18:54:01 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num_elements, size_t size_element)
{
	size_t t = num_elements * size_element;
	void *tab;;

	tab = malloc(t);
	if (!tab)
		return (NULL);
	ft_bzero(tab , t);

	return (tab);
}
/*
int main ()
{
	void *t = ft_calloc(SIZE_MAX / 3, sizeof(int));
	printf("%s\n",(char *)t);
	printf("%zu\n", SIZE_MAX);
}
*/
