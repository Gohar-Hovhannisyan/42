/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:01:27 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/10 15:32:48 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_helpu1(t_format *obj, unsigned int num, int num_len)
{
	if (obj->dot > num_len)
		num_len = obj->dot;
	if (obj->width <= num_len)
	{
		ft_print_zero(num_len - ft_numlen(num));
		if (obj->dot == 0 && num == 0)
		{
			obj->width == 0 ? write(1, " ", 0) : write(1, " ", 1);
			return (obj->width == 0 ? 0 : num_len);
		}
		ft_putnbru_fd(num, 1);
		return (num_len);
	}
	else
	{
		ft_helpu3(obj, num_len, num);
		return (obj->width);
	}
}

void	ft_helpu3(t_format *obj, int num_len, unsigned int num)
{
	if (obj->minus)
	{
		ft_print_zero(num_len - ft_numlen(num));
		if (obj->dot == 0 && num == 0)
			write(1, " ", 1);
		else
			ft_putnbru_fd(num, 1);
		ft_print_space(obj->width - num_len);
	}
	else
	{
		ft_print_space(obj->width - num_len);
		ft_print_zero(num_len - ft_numlen(num));
		if (obj->dot == 0 && num == 0)
			write(1, " ", 1);
		else
			ft_putnbru_fd(num, 1);
	}
}

int		ft_helpu2(t_format *obj, unsigned int num, int num_len)
{
	if (obj->width > num_len)
	{
		if (obj->minus)
		{
			ft_putnbru_fd(num, 1);
			ft_print_space(obj->width - num_len);
		}
		else if (obj->zero)
		{
			ft_print_zero(obj->width - num_len);
			ft_putnbru_fd(num, 1);
		}
		else
		{
			ft_print_space(obj->width - num_len);
			ft_putnbru_fd(num, 1);
		}
		return (obj->width);
	}
	else
		ft_putnbru_fd(num, 1);
	return (num_len);
}

void	ft_helpmini(int *num)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		*num *= -1;
	}
}
