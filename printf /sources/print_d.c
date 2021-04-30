/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/09 12:07:27 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		print_d(t_format *obj, va_list args)
{
	int num_len;
	int num;
	int og_len;

	num = va_arg(args, int);
	num_len = ft_numlen(num);
	og_len = ft_numlen(num);
	if (obj->dot > -1)
		return (ft_helpd1(obj, num, num_len, og_len));
	else
	{
		if (obj->width > num_len)
		{
			ft_helpd4(obj, num, num_len);
			return (obj->width);
		}
		else
			ft_putnbr_fd(num, 1);
		return (og_len);
	}
}

int		print_percent(t_format *obj)
{
	if (obj->width > 1 && obj->minus == 1)
	{
		write(1, "%", 1);
		ft_print_space(obj->width - 1);
	}
	else if (obj->width > 1 && obj->zero == 1)
	{
		ft_print_zero(obj->width - 1);
		write(1, "%", 1);
	}
	else
	{
		ft_print_space(obj->width - 1);
		write(1, "%", 1);
	}
	if (obj->width > 1)
		return (obj->width);
	return (1);
}

int		print_u(t_format *obj, va_list args)
{
	int				num_len;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	num_len = ft_numlen(num);
	if (obj->dot > -1)
	{
		return (ft_helpu1(obj, num, num_len));
	}
	else
		return (ft_helpu2(obj, num, num_len));
}

void	ft_helpd4(t_format *obj, int num, int num_len)
{
	if (obj->minus)
	{
		ft_putnbr_fd(num, 1);
		ft_print_space(obj->width - num_len);
	}
	else if (obj->zero)
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		ft_print_zero(obj->width - num_len);
		ft_putnbr_fd(num, 1);
	}
	else
	{
		ft_print_space(obj->width - num_len);
		ft_putnbr_fd(num, 1);
	}
}
