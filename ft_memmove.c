/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:54:50 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/05 01:58:38 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	
	if (d < s)
	{
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (num-- > 0)
		{
			d[num] = s[num];
		}
	}

	return (dest);
}
