/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:53:39 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/11 13:48:03 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ns;
	unsigned long	i;
	unsigned long	l;

	if (!s)
		return (NULL);
	if (len <= (l = ft_strlen(s)) - start)
	{
		if (!(ns = (char *)malloc(sizeof(*ns) * (len + 1))))
			return (NULL);
	}
	else
	{
		if (!(ns = (char *)malloc(sizeof(*ns)
						* (l - start >= 0 ? l - start + 1 : 1))))
			return (NULL);
	}
	i = 0;
	while (i < len && i + start < l)
	{
		ns[i] = s[i + start];
		i++;
	}
	ns[i] = 0;
	return (ns);
}
