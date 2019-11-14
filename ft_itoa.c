/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:58:23 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/08 19:11:11 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_core(int n, int i, int nb2)
{
	char	*nbr;

	if (!(nbr = (char *)malloc(sizeof(*nbr) * (i + 1))))
		return (NULL);
	nbr[i--] = 0;
	if (n == 0)
		nbr[i] = '0';
	while (n)
	{
		nbr[i--] = (char)(n % 10 + 48);
		n /= 10;
	}
	if (nb2 < 0)
		nbr[0] = '-';
	if (nb2 == -2147483648)
		nbr[10] = '8';
	return (nbr);
}

char		*ft_itoa(int n)
{
	int		i;
	int		nb;
	int		nb2;

	nb = n;
	nb2 = n;
	i = 0;
	if (nb <= 0)
		i++;
	if (nb == -2147483648)
		n++;
	if (nb < 0)
		n *= -1;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (itoa_core(n, i, nb2));
}
