/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:41:02 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 14:35:41 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*newdst;
	char	*newsrc;

	i = 0;
	newdst = (char *)dst;
	newsrc = (char *)src;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newsrc[i] == c)
			return (newdst + i + 1);
		i++;
	}
	return (NULL);
}
