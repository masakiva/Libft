/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:30:37 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/07 19:20:01 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (!c)
		return ((char *)(s + i));
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			break ;
		i--;
	}
	if (i >= 0)
		return ((char *)(s + i));
	else
		return (NULL);
}
