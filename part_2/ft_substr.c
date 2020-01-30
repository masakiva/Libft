/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:53:39 by mvidal-a          #+#    #+#             */
/*   Updated: 2020/01/30 14:08:37 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub != NULL)
	{
		if (start < ft_strlen(s))
		{
			i = 0;
			while (i < len && s[start] != '\0')
			{
				sub[i] = s[start];
				i++;
				start++;
			}
		}
		sub[i] = '\0';
	}
	return (sub);
}
