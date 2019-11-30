/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:21:51 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/28 18:28:17 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*
	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *anew_lst;

	anew_lst = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew(f != NULL ? (*f)(lst->content) : lst->content);
		if (new_lst == NULL)
		{
			ft_lstclear(&anew_lst, del);
			break ;
		}
		ft_lstadd_back(&anew_lst, new_lst);
		lst = lst->next;
	}
	return (anew_lst);
}
