/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:45:08 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/08 10:13:53 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


 char	*ft_strchr(const char *s, int c)
{
	char *str = (char *)s;
	char ch;

	ch = (char)c; 
	while (*str != '\0')
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (ch == '\0')
		return (str);
	return (NULL);
}
