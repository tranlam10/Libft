/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:13:52 by latran            #+#    #+#             */
/*   Updated: 2017/09/30 23:10:53 by latran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nxtlst;
	t_list *lst;

	if (alst == NULL || del == NULL)
		return ;
	lst = *alst;
	while (lst)
	{
		nxtlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nxtlst;
	}
	*alst = NULL;
}
