/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 12:14:09 by latran            #+#    #+#             */
/*   Updated: 2017/09/28 22:23:48 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s != '\0')
				s++;
			count++;
		}
	}
	return (count);
}

static int	lengthword(char const *s, char c)
{
	int length;

	length = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	int		wordscount;
	char	**array;
	int		index;

	index = 0;
	if (s == '\0')
		return (NULL);
	wordscount = num_words(s, c);
	array = (char **)malloc(sizeof(*array) * (wordscount + 1));
	if (array == NULL)
		return (NULL);
	while (wordscount)
	{
		while (*s == c && *s != '\0')
			s++;
		array[index] = ft_strsub(s, 0, lengthword(s, c));
		s = s + lengthword(s, c);
		index++;
		wordscount--;
	}
	array[index] = NULL;
	return (array);
}
