/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:24:36 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/18 19:52:39 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return ((char *)str);
	if (str == 0 && n == 0)
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return ((char *)str + (i - j));
		i = (i - j) + 1;
	}
	return (NULL);
}

/*int main()
{
	const char str[] = "mohammed";
	char to_find[] = "ham";
	printf("%s\n", ft_strnstr(str, to_find, 5));

} */
