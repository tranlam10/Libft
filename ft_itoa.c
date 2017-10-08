/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 12:08:46 by latran            #+#    #+#             */
/*   Updated: 2017/09/19 20:19:38 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_size(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	if (n == -2147483648)
		count = 11;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		index;
	int		size;
	int		holder;

	index = 0;
	holder = n;
	size = word_size(n);
	str = (char *)malloc(word_size(n) + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (size > 0)
	{
		if (n < 0)
			n = -n;
		str[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	if (holder < 0)
		str[0] = '-';
	return (str);
}
