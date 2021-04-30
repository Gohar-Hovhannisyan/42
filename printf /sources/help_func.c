/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:57:11 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/09 12:01:01 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_helpd3(t_format *obj, int og_len, int num, int num_len)
{
	if (obj->minus)
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		ft_print_zero(num_len - og_len);
		if (obj->dot == 0 && num == 0)
			write(1, " ", 1);
		else
			ft_putnbr_fd(num, 1);
		ft_print_space(obj->width - num_len);
	}
	else
	{
		ft_print_space(obj->width - num_len);
		ft_helpmini(&num);
		ft_print_zero(num_len - og_len);
		if (obj->dot == 0 && num == 0)
			write(1, " ", 1);
		else
			ft_putnbr_fd(num, 1);
	}
}

int		ft_helpd2(t_format *obj, int num, int num_len, int og_len)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	ft_print_zero(num_len - og_len);
	if (obj->dot == 0 && num == 0)
	{
		obj->width == 0 ? write(1, " ", 0) : write(1, " ", 1);
		return (obj->width == 0 ? 0 : num_len);
	}
	ft_putnbr_fd(num, 1);
	return (num_len);
}

int		ft_helpd1(t_format *obj, int num, int num_len, int og_len)
{
	if (num < 0)
		num_len--;
	if (obj->dot > num_len)
		num_len = obj->dot;
	if (num < 0)
		num_len++;
	if (obj->width <= num_len)
		return (ft_helpd2(obj, num, num_len, og_len));
	else
	{
		ft_helpd3(obj, og_len, num, num_len);
		return (obj->width);
	}
}

void	ft_print_zero(int size)
{
	while (size-- > 0)
		write(1, "0", 1);
}

void	ft_print_space(int size)
{
	while (size-- > 0)
		write(1, " ", 1);
}
