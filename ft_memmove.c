/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:52:56 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/17 22:17:23 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if ((char)dest == (char)src)
		return (dest);
	if ((char)dest > (char)src)
	{
		while (len--)
		{
			((char *)dest)[len] = ((char *)src)[len];
		}
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstringhhhhh";

//    printf("Before moving dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After moving dest = %s, src = %s\n", dest, src);
// }
