/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:37:07 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/14 12:45:31 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i = ft_strlen(str);
	while(i >= 0)
	{
		if(str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
