/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:36:41 by hel-asli          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:20 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h> 
# include <limits.h>

int		ft_isalnum(int arg);
int		ft_isalpha(int c);
int		ft_isdigit(int arg);
size_t	ft_strlen(const char *str);
int		ft_tolower(int arg);
int		ft_toupper(int arg);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_calloc(size_t num_elements, size_t size_element);
char *ft_strdup(const char *str1);
char *ft_substr(const char *s, unsigned int start, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
char *ft_strjoin(const char *s1, const char *s2);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_itoa(int n);
char *ft_strtrim(char const *s1,char const *set);

#endif
