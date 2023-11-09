/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:25:06 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/09 22:44:30 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_start(const char *s1, const char *set)
{
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	i = 0;
	
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return i;
}

int ft_end(const char *s1, const char *set)
{
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set , s1[len - i -1]) == 0)
			break;
		i++;
	}
	return len - i;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int end;
	char *str;

	if (!s1)
		return NULL;
	if (!set)
		return ft_strdup(s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return ft_strdup("");
	str = (char *)malloc(sizeof(char) * (end - start + 1));

	if (!str)
		return NULL;
	ft_strlcpy(str, s1+start, end - start + 1);
	return str;
}
/*
int main (void)
{
	char *str = "ab*bb kksjfal f;askdjf*ba";
	printf("%s\n", ft_strtrim(str, "ab"));
}
*/
