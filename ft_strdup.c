/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:33:06 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/28 18:29:45 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*
	ft_strdup(const char *s1)
{
	char			*dup;
	size_t			len;
	unsigned long	i;

	len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup != NULL)
	{
		i = 0;
		while (i < len)
		{
			dup[i] = s1[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
