/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:04:44 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/07 21:36:00 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	unsigned long	l;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		l = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[l - i] = ((unsigned char *)src)[l - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
