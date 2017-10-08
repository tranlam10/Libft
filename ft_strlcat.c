/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 22:56:16 by latran            #+#    #+#             */
/*   Updated: 2017/09/30 23:43:36 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t dstlength;
	size_t srclength;
	size_t max;

	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (size <= dstlength)
		return (size + srclength);
	max = size - dstlength - 1;
	if (size > dstlength)
	{
		ft_strncat(dst, src, max);
	}
	return (dstlength + srclength);
}
