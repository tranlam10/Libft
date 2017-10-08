/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:20:48 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 13:23:01 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)str;
	if (ft_strchr(str1, c) == NULL)
		return (NULL);
	while (str1[i])
		i++;
	while (str1[i] != c)
		i--;
	return (str1 + i);
}
