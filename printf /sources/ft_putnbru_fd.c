/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:58:29 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/02 13:33:21 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putnbru_fd(unsigned num, int fd)
{
	if (num >= 10)
	{
		ft_putnbru_fd(num / 10, fd);
		ft_putnbru_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
