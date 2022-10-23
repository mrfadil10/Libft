/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:36:34 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/17 22:06:48 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if (s == NULL)
		return (s);
	ft_bzero(s, size * count);
	return (s);
}

/*int main()
{
	int *A = malloc(sizeof(int));
	int *B = ft_calloc(1, sizeof(int));

	printf("the adress of pointer A: %d and the value : %d \n", A, *A);
	printf("the adress of pointer B: %d and the value : %d \n", B, *B);

	return (0);
}*/
