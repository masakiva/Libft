/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:44:06 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/09 22:02:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;
	int		s1len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
		return (s1 ? ft_strdup(s1) : ft_strdup(s2));
	s1len = ft_strlen(s1);
	if (!(s3 = (char *)malloc(sizeof(*s3) * (s1len + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[i - s1len])
	{
		s3[i] = s2[i - s1len];
		i++;
	}
	s3[i] = 0;
	return (s3);
}
