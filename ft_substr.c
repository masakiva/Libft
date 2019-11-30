/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:53:39 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/30 15:17:54 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			slen;
	size_t			sublen;
	unsigned long	i;

	slen = ft_strlen(s);
	sublen = len;
	if (start > slen)
		sublen = 0;
	else if (len + start > slen)
		sublen = slen - start;
	sub = (char *)malloc(sizeof(char) * (sublen + 1));
	if (sub != NULL)
	{
		sub[sublen] = '\0';
		i = 0;
		while (i < sublen)
		{
			sub[i] = s[i + start];
			i++;
		}
	}
	return (sub);
}
