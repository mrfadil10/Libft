/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:22:27 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/15 22:46:45 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void fn_ptr(char *s, void (*f)(unsigned int, char *))
{
	size_t i;
	f(i, &s[i]);
}

int fn(int a,char c)
{
	printf("%c\n%d\n", a, c);
	return a;
}


int main()
{
	int (*fn_ptr)(int, char) = &fn;
	fn_ptr('A', 15);
	return 0;
}
