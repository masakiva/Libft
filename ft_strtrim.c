/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:40:30 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/10 17:41:35 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_count(const char *s1, const char *set, int s1len, int inc_dec)
{
	int		i;
	int		j;

	i = 0;
	if (!set)
		return (0);
	while (i < s1len)
	{
		j = 0;
		while (set[j])
		{
			if (s1[inc_dec ? i : s1len - i - 1] == set[j])
				break ;
			j++;
		}
		if (!set[j])
			break ;
		i++;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		trim_end;
	int		trim_start;
	char	*s2;
	int		i;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	if (len - (trim_end = trim_count(s1, set, len, 0)))
	{
		trim_start = trim_count(s1, set, len - trim_end, 1);
		len -= trim_start + trim_end;
		if (!(s2 = (char *)malloc(sizeof(*s2) * (len + 1))))
			return (NULL);
		i--;
		while (++i < len)
			s2[i] = s1[trim_start + i];
	}
	else if (!(s2 = (char *)malloc(sizeof(*s2) * 1)))
		return (NULL);
	s2[i] = 0;
	return (s2);
}
