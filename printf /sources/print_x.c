/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/10 15:41:05 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		print_p(t_format *obj, va_list args)
{
	unsigned long long	hx;
	int					p_len;
	char				*a;

	a = va_arg(args, void*);
	if (a == NULL && obj->dot == 0)
		return (ft_helpp1(obj));
	else if (a == NULL)
		return (ft_helpp2(obj));
	hx = (unsigned long long)a;
	p_len = ft_hexlen(hx) + 2;
	if (obj->width <= p_len)
	{
		ft_putpointer_fd(hx, 1);
		return (p_len);
	}
	else
		return (ft_helpp3(obj, p_len, hx));
}

int		print_x(t_format *obj, va_list args)
{
	unsigned long long	hx;
	int					x_len;

	hx = va_arg(args, unsigned int);
	x_len = ft_hexlen(hx);
	if (obj->dot > -1)
		return (ft_helpx1(obj, hx, x_len));
	else
		return (ft_helpx2(obj, hx, x_len));
}

int		print_xup(t_format *obj, va_list args)
{
	unsigned long long	hx;
	int					x_len;

	hx = va_arg(args, unsigned int);
	x_len = ft_hexlen(hx);
	if (obj->dot > -1)
		return (ft_helpxup1(obj, hx, x_len));
	else
		return (ft_helpxup2(obj, hx, x_len));
}

int		ft_helpxup1(t_format *obj, unsigned long long hx, int x_len)
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
		ft_puthexup_fd(hx, 1);
		return (x_len);
	}
	else
	{
		ft_helpxup3(obj, x_len, hx);
		return (obj->width);
	}
}

void	ft_helpxup3(t_format *obj, int x_len, unsigned long long hx)
{
	if (obj->minus)
	{
		ft_print_zero(x_len - ft_hexlen(hx));
		if (obj->dot == 0 && hx == 0)
			write(1, " ", 1);
		else
			ft_puthexup_fd(hx, 1);
		ft_print_space(obj->width - x_len);
	}
	else
	{
		ft_print_space(obj->width - x_len);
		ft_print_zero(x_len - ft_hexlen(hx));
		if (obj->dot == 0 && hx == 0)
			write(1, " ", 1);
		else
			ft_puthexup_fd(hx, 1);
	}
}
