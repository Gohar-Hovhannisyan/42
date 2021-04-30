/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/10 15:40:37 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_helpp1(t_format *obj)
{
	if (obj->width <= 2)
	{
		write(1, "0x", 2);
		return (2);
	}
	else
	{
		if (obj->minus)
		{
			write(1, "0x", 2);
			ft_print_space(obj->width - 2);
		}
		else
		{
			ft_print_space(obj->width - 2);
			write(1, "0x", 2);
		}
		return (obj->width);
	}
}

int		ft_helpp2(t_format *obj)
{
	if (obj->width <= 3)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		if (obj->minus)
		{
			write(1, "0x0", 3);
			ft_print_space(obj->width - 3);
		}
		else
		{
			ft_print_space(obj->width - 3);
			write(1, "0x0", 3);
		}
		return (obj->width);
	}
}

int		ft_helpp3(t_format *obj, int p_len, unsigned long long hx)
{
	if (obj->minus == 1)
	{
		ft_putpointer_fd(hx, 1);
		ft_print_space(obj->width - p_len);
	}
	else
	{
		ft_print_space(obj->width - p_len);
		ft_putpointer_fd(hx, 1);
	}
	return (obj->width);
}
