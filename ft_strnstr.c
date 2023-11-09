/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:43:59 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/03 03:13:18 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)big;
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (little[j] == str[i + j] && little[j] && i + j < len)
			j++;
		if (j == ft_strlen(little))
			return (str + i);
		i++;
	}
	return (NULL);
}
