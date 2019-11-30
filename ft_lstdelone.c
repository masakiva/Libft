/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:13:11 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/28 18:23:02 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void
	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != NULL && lst != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}
