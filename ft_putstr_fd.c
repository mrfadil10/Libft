/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:18:46 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/12 18:35:29 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*int main()
{
	 int f = open("foo.txt", O_RDWR | O_CREAT);
	printf("fd = %d",f);
	ft_putstr_fd("dd", f);
}*/
