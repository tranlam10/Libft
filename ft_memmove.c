/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:40:42 by latran            #+#    #+#             */
/*   Updated: 2017/09/30 23:15:56 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*newdst;
	char	*newsrc;
	size_t	i;

	i = 0;
	newdst = (char *)dst;
	newsrc = (char *)src;
	if (newsrc < newdst)
	{
		while ((int)len >= 0)
		{
			newdst[len] = newsrc[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			newdst[i] = newsrc[i];
			i++;
		}
	}
	return (newdst);
}
