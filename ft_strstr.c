/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 12:24:11 by latran            #+#    #+#             */
/*   Updated: 2017/09/21 15:30:56 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *c)
{
	int len;
	int pos;
	int length;

	len = 0;
	pos = 0;
	length = ft_strlen(c);
	if (length == 0)
		return ((char *)str);
	while (str[pos])
	{
		while (c[len] == str[pos + len])
		{
			if (len == length - 1)
				return ((char *)(str + pos));
			len++;
		}
		len = 0;
		pos++;
	}
	return (NULL);
}
