/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:42:13 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/12 20:55:40 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<string.h>
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void 	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, char *to_find, size_t n);
char	*ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int	ft_toupper(int c);
void *ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *s1);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
#endif
