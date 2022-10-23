/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:23:57 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/18 16:32:03 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	lnt1;
	size_t	lnt2;

	if (!(s1) || !(s2))
		return (NULL);
	lnt1 = ft_strlen(s1);
	lnt2 = ft_strlen(s2);
	dest = (char *)malloc(lnt1 + lnt2 + 1);
	if (dest)
	{
		ft_memcpy(dest, s1, lnt1);
		ft_memcpy(dest + lnt1, s2, lnt2 + 1);
	}
	return (dest);
}

// int	main()
// {
// 	char s1[] = "simo";
// 	char s2[] = "fadel";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }
