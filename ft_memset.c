/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:16:42 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/16 09:59:07 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char)c; 
		i++;
	}
	return (str);
}
/*
int main (void)
{
	int n = INT_MAX;
	int *p = &n;
	int u;
	char *ptr = (char *)&u;
	char *c = (char *)p;
	int i;

	i = 0;
	while ( i < 4)
	{
		ft_memset(ptr++, *(c++) , 1);
		i++;
	}
	printf("%d\n", u);
}
*/
