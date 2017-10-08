/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:56:59 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 13:29:23 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (newdst);
}
