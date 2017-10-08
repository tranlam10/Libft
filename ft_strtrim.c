/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 16:58:37 by latran            #+#    #+#             */
/*   Updated: 2017/10/01 00:40:49 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstring;
	int		len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while ((s[len - 1] == ' ') || (s[len - 1] == '\n') || (s[len - 1] == '\t'))
		len--;
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
	{
		len--;
		i++;
	}
	if (len <= 0)
		len = 0;
	newstring = ft_strsub(s, i, len);
	return (newstring);
}
