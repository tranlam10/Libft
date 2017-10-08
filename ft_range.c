/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 19:30:13 by latran            #+#    #+#             */
/*   Updated: 2017/10/07 19:32:03 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
{
	int i;
	int size;
	int *integers;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	integers = (int*)malloc(sizeof(*integers) * size);
	while (i < size)
	{
		integers[i] = min;
		min++;
		i++;
	}
	return (integers);
}
