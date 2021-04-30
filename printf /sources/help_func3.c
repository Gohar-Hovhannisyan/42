/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/10 15:34:58 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_helpx1(t_format *obj, unsigned long long hx, int x_len)
{
	if (obj->dot > x_len)
		x_len = obj->dot;
	if (obj->width <= x_len)
	{
		ft_print_zero(x_len - ft_hexlen(hx));
		if (obj->dot == 0 && hx == 0)
		{
			obj->width == 0 ? write(1, " ", 0) : write(1, " ", 1);
			return (obj->width == 0 ? 0 : x_len);
		}
		ft_puthexlo_fd(hx, 1);
		return (x_len);
	}
	else
	{
		ft_helpx3(obj, x_len, hx);
		return (obj->width);
	}
}

void	ft_helpx3(t_format *obj, int x_len, unsigned long long hx)
{
	if (obj->minus)
	{
		ft_print_zero(x_len - ft_hexlen(hx));
		if (obj->dot == 0 && hx == 0)
			write(1, " ", 1);
		else
			ft_puthexlo_fd(hx, 1);
		ft_print_space(obj->width - x_len);
	}
	else
	{
		ft_print_space(obj->width - x_len);
		ft_print_zero(x_len - ft_hexlen(hx));
		if (obj->dot == 0 && hx == 0)
			write(1, " ", 1);
		else
			ft_puthexlo_fd(hx, 1);
	}
}

int		ft_helpx2(t_format *obj, unsigned long long hx, int x_len)
{
	if (obj->width > x_len)
	{
		if (obj->minus)
		{
			ft_puthexlo_fd(hx, 1);
			ft_print_space(obj->width - x_len);
		}
		else if (obj->zero)
		{
			ft_print_zero(obj->width - x_len);
			ft_puthexlo_fd(hx, 1);
		}
		else
		{
			ft_print_space(obj->width - x_len);
			ft_puthexlo_fd(hx, 1);
		}
		return (obj->width);
	}
	else
		ft_puthexlo_fd(hx, 1);
	return (x_len);
}

int		ft_helpxup2(t_format *obj, unsigned long long hx, int x_len)
{
	if (obj->width > x_len)
	{
		if (obj->minus)
		{
			ft_puthexup_fd(hx, 1);
			ft_print_space(obj->width - x_len);
		}
		else if (obj->zero)
		{
			ft_print_zero(obj->width - x_len);
			ft_puthexup_fd(hx, 1);
		}
		else
		{
			ft_print_space(obj->width - x_len);
			ft_puthexup_fd(hx, 1);
		}
		return (obj->width);
	}
	else
		ft_puthexup_fd(hx, 1);
	return (x_len);
}
