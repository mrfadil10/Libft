/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:21 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/09 19:05:43 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

/* int main()
{
	char str[] = "m fadil";
	printf("%zu\n", ft_strlen(str));
} */
