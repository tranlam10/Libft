/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:28:39 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 16:00:15 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)str;
	if (c == '\0')
	{
		while (str1[i] != '\0')
			i++;
		return (&str1[i]);
	}
	while (str1[i])
	{
		if (str1[i] == c)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
