/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:25:31 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/11 14:02:59 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(const char *s, int i, char c)
{
	int		l;

	l = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
		l++;
	}
	return (l);
}

static int	wordcount(const char *s, char c)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if ((j = wordlen(s, i, c)) > 0)
		{
			n++;
			i += j;
		}
		else
			i++;
	}
	return (n);
}

static void	*free_strs(char **strs, int j)
{
	int		i;

	i = 0;
	while (i < j)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static char	**initialize_strs(const char *s, char c, int *n)
{
	char	**strs;

	if (!s)
		return (NULL);
	*n = wordcount(s, c);
	if (!(strs = (char **)malloc(sizeof(*strs) * (*n + 1))))
		return (NULL);
	strs[*n] = NULL;
	return (strs);
}

char		**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		l;
	int		n;
	char	**strs;

	if (!(strs = initialize_strs(s, c, &n)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < n)
	{
		if ((l = wordlen(s, i, c)) > 0)
		{
			if (!(strs[j] = (char *)malloc(sizeof(**strs) * (l + 1))))
				return (free_strs(strs, j));
			ft_strlcpy(strs[j++], s + i, l + 1);
			i += l;
		}
		else
			i++;
	}
	return (strs);
}
