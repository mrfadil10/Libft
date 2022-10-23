/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:52:22 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/21 09:25:47 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	s = ft_strlen(src);
	d = ft_strlen(dest);
	if (size < d + 1)
		return (size + s);
	if (size > d + 1)
	{
		while (src[i] && i < size - d - 1)
		{
			dest[d + i] = src[i];
			i++;
		}
	}
	dest[d + i] = '\0';
	return (s + d);
}
