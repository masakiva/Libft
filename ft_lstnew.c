/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:29:42 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/28 18:28:47 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*
	ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (new_elem != NULL)
	{
		new_elem->content = content;
		new_elem->next = NULL;
	}
	return (new_elem);
}
