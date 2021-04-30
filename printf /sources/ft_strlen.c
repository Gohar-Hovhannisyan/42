/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:04:22 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/31 15:40:39 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

size_t	ft_numlen(long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num)
	{
		++len;
		num = num / 10;
	}
	return (len);
}

int		ft_hexlen(unsigned long long hx)
{
	int		temp;
	int		i;

	i = 0;
	if (hx == 0)
		return (1);
	while (hx)
	{
		temp = hx % 16;
		i++;
		hx = hx / 16;
	}
	return (i);
}
