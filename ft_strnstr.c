/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:18:23 by latran            #+#    #+#             */
/*   Updated: 2017/09/28 22:19:18 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t len)
{
	size_t	c_pos;
	size_t	pos;
	size_t	length;

	c_pos = 0;
	pos = 0;
	length = ft_strlen(c);
	if (*c == '\0')
		return ((char *)str);
	while (str[pos])
	{
		while (c[c_pos] == str[pos + c_pos] && (pos + c_pos <= len))
		{
			if (c_pos == length - 1)
				return ((char *)(str + pos));
			c_pos++;
		}
		c_pos = 0;
		pos++;
	}
	return (NULL);
}
