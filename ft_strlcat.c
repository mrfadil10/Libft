/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:52:22 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/09 19:05:23 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	s = 0;
	d = 0;
	while	(dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (size + s);
	while (src[i] && i < size - d - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}
