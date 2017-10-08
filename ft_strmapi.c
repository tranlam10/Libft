/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 13:15:09 by latran            #+#    #+#             */
/*   Updated: 2017/09/28 23:25:53 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstring;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	newstring = (char *)malloc(ft_strlen(s) + 1);
	if (newstring == NULL)
		return (NULL);
	while (s[i])
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
