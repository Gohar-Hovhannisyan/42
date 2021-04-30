/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/09 12:07:58 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		print_c(t_format *obj, va_list args)
{
	char	c;
	int		count;

	c = (char)va_arg(args, unsigned);
	count = 0;
	if (obj->width > 1)
	{
		count = obj->width;
		if (obj->minus != 1)
		{
			ft_print_space(obj->width - 1);
			write(1, &c, 1);
		}
		else
		{
			write(1, &c, 1);
			ft_print_space(obj->width - 1);
		}
		return (obj->width);
	}
	else
	{
		write(1, &c, 1);
		return (1);
	}
}

int		ft_helps1(t_format *obj, char *str)
{
	int ret_val;

	ret_val = obj->width;
	if (obj->dot > -1 && obj->dot < (int)ft_strlen(str))
	{
		ft_putstrlen_fd(str, 1, obj->dot);
		obj->width = obj->width - obj->dot;
	}
	else
	{
		ft_putstrlen_fd(str, 1, ft_strlen(str));
		obj->width = obj->width - ft_strlen(str);
	}
	ft_print_space(obj->width);
	return (ret_val);
}

void	ft_helps2(t_format *obj, char *str)
{
	if (obj->dot > -1 && obj->dot < (int)ft_strlen(str))
	{
		ft_print_space(obj->width - obj->dot);
		ft_putstrlen_fd(str, 1, obj->dot);
	}
	else
	{
		ft_print_space(obj->width - ft_strlen(str));
		ft_putstrlen_fd(str, 1, ft_strlen(str));
	}
}

int		print_s(t_format *obj, va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char*);
	if (!str)
		str = "(null)";
	len = (int)ft_strlen(str);
	if (len > obj->dot && obj->dot > -1)
		len = obj->dot;
	if (obj->width <= len)
	{
		ft_putstrlen_fd(str, 1, len);
		return (len);
	}
	else
	{
		if (obj->minus == 1)
			return (ft_helps1(obj, str));
		else
			ft_helps2(obj, str);
		return (obj->width);
	}
}
