/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:10:46 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/19 03:23:51 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			lnt;
	char			*newstr;

	i = 0;
	if (!s || !f)
		return (NULL);
	lnt = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (lnt + 1));
	if (!newstr)
		return (0);
	while (i < lnt)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
