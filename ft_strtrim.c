/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:39:53 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/09 16:41:42 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int front_set_count(char const *s1, char const *set)
{
	size_t set_len;
	size_t i;

	i = 0;
	set_len = ft_strlen(set);
	while (i < set_len)
	{
		if (s1[i] != set[i])
			return 0;
		i++;
	}
	return 1;
}
static int back_set_count(char const *s1, char const *set)
{
	
	size_t set_len;
	size_t i;

	i = ft_strlen(s1);
	set_len = ft_strlen(set);
	while (set_len > 0)
	{
		if (s1[i - 1] != set[set_len - 1])
			return 0;
		i--;
		set_len--;
	}
	return 1;
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return NULL;
	size_t s1_len = ft_strlen(s1);
	size_t set_len = ft_strlen(set);
	unsigned int size;
	int i;
	char *str;
	int a = front_set_count(s1, set);
	int b = back_set_count(s1, set);

	size = 0;
	if (a && b)
	{
		size = s1_len - (2 * set_len);
		if (size < 0)
			size = 0;
	}

	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return NULL;
	i = 0;	
	while(i < size)	
		str[i++] = s1[set_len++];
	str[i] = '\0';

	return str;	
}
