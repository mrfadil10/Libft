/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:20:35 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/13 14:53:58 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int allocate_x(char const *str, unsigned int start,  size_t len)
{
	int i = 0;
	while (str[start + i] && i < len)
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;

	s_len = ft_strlen(s);

	if (start >= s_len)
		return (NULL);

	dest = (char*)malloc(sizeof(char) * (allocate_x(s, start, len) + 1));
	int i = 0;
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
