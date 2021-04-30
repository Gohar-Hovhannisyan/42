/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/31 14:15:35 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*check_flags(char *str, t_format *obj)
{
	if (*str == '-')
	{
		obj->minus = 1;
		str++;
	}
	if (*str == '0')
	{
		obj->zero = 1;
		str++;
		if (*str == '-')
		{
			obj->minus = 1;
			str++;
		}
	}
	return (str);
}

char	*check_width(char *str, t_format *obj, va_list args)
{
	int w;

	w = ft_atoi(str);
	if (w >= 0)
	{
		obj->width = w;
		while (*str >= '0' && *str <= '9')
			str++;
	}
	if (*str == '*')
	{
		obj->width = va_arg(args, int);
		if (obj->width < 0)
		{
			obj->minus = 1;
			obj->width *= -1;
		}
		str++;
	}
	return (str);
}

char	*check_precision(char *str, t_format *obj, va_list args)
{
	int w;

	if (*str != '.')
		return (str);
	str++;
	w = ft_atoi(str);
	if (w >= 0)
	{
		obj->dot = w;
		while (*str >= '0' && *str <= '9')
			str++;
	}
	if (*str == '*')
	{
		obj->dot = va_arg(args, int);
		str++;
	}
	return (str);
}

char	*check_type(char *str, t_format *obj)
{
	obj->type = (int)*str;
	return (str);
}
