/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:30:15 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/09 18:54:00 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	/*while (i < n)
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
			return ((unsigned char *)s1 - (unsigned char *)s2);
		s1++;
		s2++;
	}
	return((unsigned char *)s1 - (unsigned char *)s2);*/

	unsigned char *tmp1 = (unsigned char *)s1;
	unsigned char *tmp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char s1[] = "fadele";
	char s2[] = "fadell";
	printf("%d\n", ft_memcmp((unsigned char *)s1, (unsigned char *)s2, 5));
}*/
