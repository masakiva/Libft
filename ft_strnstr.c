/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:18:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/11 14:15:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strnstr_core(const char *hs, const char *ndl, size_t len, size_t i)
{
	int		j;
	int		n;

	n = 0;
	while (hs[i] && i < len)
	{
		j = 0;
		while (hs[i] != ndl[j] && hs[i] && i < len)
			i++;
		if (!hs[i])
			break ;
		if (hs[i] == ndl[j])
			n = i;
		while (hs[i] == ndl[j] && ndl[j] && i < len)
		{
			i++;
			j++;
		}
		if (!ndl[j])
			return ((char *)(hs + n));
		else if (i == len)
			break ;
		i = n + 1;
	}
	return (NULL);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!needle[0])
		return ((char *)haystack);
	return (strnstr_core(haystack, needle, len, 0));
}
