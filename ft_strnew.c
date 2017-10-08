/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:02:02 by latran            #+#    #+#             */
/*   Updated: 2017/09/24 22:27:26 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstring;

	newstring = (char *)malloc(size + 1);
	if (newstring == NULL)
		return (NULL);
	ft_memset(newstring, '\0', size + 1);
	return (newstring);
}
