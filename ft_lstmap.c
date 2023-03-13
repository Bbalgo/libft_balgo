/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:20:21 by dsudadec          #+#    #+#             */
/*   Updated: 2023/03/13 22:15:12 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*resfnc;

	(void)del;
	if (!lst || !f)
		return (NULL);
	resfnc = ft_lstnew(f(lst->content));
	if (!(resfnc))
		return (NULL);
	res = resfnc;
	lst = lst->next;
	while (lst)
	{
		resfnc = ft_lstnew(f(lst->content));
		if (!(resfnc))
		{
			ft_lstclear(&resfnc, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&res, resfnc);
	}
	return (res);
}
