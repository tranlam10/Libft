/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 17:27:40 by latran            #+#    #+#             */
/*   Updated: 2017/09/18 15:54:26 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_white_spaces(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	else if ((c == '\v') || (c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int negative;
	int number;

	i = 0;
	negative = 0;
	number = 0;
	while (check_white_spaces(str[i]) == 1)
		i++;
	if (str[i] == '-')
		negative = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	if (negative)
		return (-number);
	else
		return (number);
}
