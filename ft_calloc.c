/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:04:32 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/05 03:10:48 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num_elements, size_t size_element)
{
	size_t t = num_elements * size_element;

	void *tab = malloc(t);

	if (tab != NULL)
	{
		ft_memset(tab, 0, t);
	}
	return (tab);
}
