/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 15:27:17 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 15:13:21 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && n != 0)
	{
		s1[i] = s2[j];
		i++;
		j++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
