/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:19:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/11 16:38:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*room;
	unsigned long	i;

	i = 0;
	if (!(room = malloc(size * count)))
		return (NULL);
	ft_bzero(room, size * count);
	return (room);
}
