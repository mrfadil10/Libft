/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:00:24 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/09 19:06:34 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
	{
		c -= 32;
	}
	return ((unsigned char)c);
}
int	main()
{
	printf("%c\n", ft_toupper('h'));
}
