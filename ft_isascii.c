/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:20:01 by mvidal-a          #+#    #+#             */
/*   Updated: 2019/11/28 18:21:36 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
