/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:21:51 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/11 15:40:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nl;
	t_list *anl;

	anl = 0;
	while (lst)
	{
		if (!(nl = ft_lstnew(f ? (*f)(lst->content) : lst->content)))
		{
			ft_lstclear(&anl, del);
			return (NULL);
		}
		ft_lstadd_back(&anl, nl);
		lst = lst->next;
	}
	return (anl);
}
