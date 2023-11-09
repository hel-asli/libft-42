/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:44:10 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/08 10:09:44 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	ch;
	int	len;

	s1 = (char *)s;
	len = ft_strlen(s);
	ch = (char)c;
	while (len >= 0) 
	{
		if (s1[len] == ch)
			return (&s1[len]);
		len--;
	}
	return (NULL);
}
