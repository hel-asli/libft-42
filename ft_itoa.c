/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:38:05 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/09 13:55:23 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned  int count_numbers(int n)
{
	unsigned int count;
	long tmp;
	count = 0;
	tmp = n;
	if (tmp < 0)
	{
		count++;
		tmp = tmp * -1;
	}
	while (tmp / 10)
	{
		count++;
		tmp =  tmp / 10;
	}
	count++;
	return count;
}

char *ft_itoa(int n)
{
	char *s;
	unsigned int len;
	unsigned int i;
	long tmp;

	tmp = n;
	len = count_numbers(n);
	s = (char *)malloc(len+1);

	if(!s)
		return NULL;
	i = len;
	s[i] = '\0';
	i -= 1;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		s[0] = '-';
	}
	while(tmp / 10)
	{
		s[i] = tmp % 10 + '0';
		tmp = tmp / 10;
		i--;
	}
	s[i] = tmp + '0';
	return s;
}
/*
int main (void)
{
	char *s = ft_itoa(INT_MIN);
	printf("%s\n", s);
}
*/
