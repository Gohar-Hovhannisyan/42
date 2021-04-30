/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:15:48 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/31 15:38:46 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_puthexlo_fd(unsigned long long hx, int fd)
{
	char	hex[35];
	int		temp;
	int		i;

	i = 0;
	if (hx == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (hx)
	{
		temp = hx % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else
			hex[i] = 'a' - 10 + temp;
		i++;
		hx = hx / 16;
	}
	while (i--)
		write(fd, &hex[i], 1);
}

void	ft_puthexup_fd(unsigned long long hx, int fd)
{
	char	hex[35];
	int		temp;
	int		i;

	i = 0;
	if (hx == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (hx)
	{
		temp = hx % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else
			hex[i] = 'A' - 10 + temp;
		i++;
		hx = hx / 16;
	}
	while (i--)
		write(fd, &hex[i], 1);
}

void	ft_putpointer_fd(unsigned long long hx, int fd)
{
	char	hex[35];
	int		temp;
	int		i;

	i = 0;
	if (hx == 0)
	{
		write(1, "0x0", 3);
		return ;
	}
	while (hx)
	{
		temp = hx % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else
			hex[i] = 'a' - 10 + temp;
		i++;
		hx = hx / 16;
	}
	write(fd, "0x", 2);
	while (i--)
		write(fd, &hex[i], 1);
}
