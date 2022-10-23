/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:17:35 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/17 22:17:57 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned int)c;
		i++;
	}
	return (b);
}

/*int main()
{
	unsigned char b[] = "hello world";
	int c = 'A';
	printf("%s\n", (char *) ft_memset(b, c, 5));
}*/
