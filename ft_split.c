/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:15 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/10 21:48:41 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int count_words(char const *str,char c)
{
	unsigned int i;
	unsigned int count;
	if (!str)
		return 0;

	i = 0;
	count = 0;
	while (str[i] == c && str[i])
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while(str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return count;
}
char *duplicate_word(const char *s, int start , int end)
{
	int len = end - start + 1;
	char *word = malloc((len + 1) * sizeof(char));
	if (!word)
		return NULL;

	int i;

	i = 0;
	while (i < len)
	{
		word[i] = s[start+i];
		i++;
	}
	word[len] = '\0';
	return word;
}
char **ft_dup(char **result , char const *s , char c, int i, int start, int k)
{
	while(s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)	
				i++;
			result[k] = duplicate_word(s, start , i - 1);
			if (!result[k])
			{
				while (k > 0)
				{
					k--;
					free(result[k]);
				}
				free(result);
				return NULL;
			}
			k++;
		}
		else
			i++;
	}
	result[k] = NULL;
	return result;
}
char **ft_split(char const *s, char c)
{
	char **result;
	if (!s)
		return NULL;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return NULL;
	int i = 0;
	int k = 0;
	int start = 0;

	return ft_dup(result, s, c , i , start , k);
}

/*
int main ()
{
	char *str = "hamza;elalsi;hhh;jdsla;aaa;hhhh;;;;";
	char **s = ft_split(str,';');
	while (*s != NULL)
	{
		printf("%s\n", *s);
		s++;
	}
}
*/
