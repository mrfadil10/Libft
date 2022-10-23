/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:40:34 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/19 00:24:16 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return ((void *)((char *)str + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "HELLO";
	printf("%s\n", (char *) ft_memchr(str, 'O', 5));
} */
