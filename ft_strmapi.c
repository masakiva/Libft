/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:19:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/10 17:29:06 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		l;
	char	*ns;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (!(ns = (char *)malloc(sizeof(*s) * (l + 1))))
		return (NULL);
	while (s[i])
	{
		ns[i] = f ? (*f)(i, s[i]) : s[i];
		i++;
	}
	ns[i] = 0;
	return (ns);
}
