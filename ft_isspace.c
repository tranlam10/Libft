/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:27:14 by latran            #+#    #+#             */
/*   Updated: 2017/10/07 18:58:34 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}