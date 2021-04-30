/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:02:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/09 11:55:25 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdio.h>

char			*set_flags(t_format *obj, char *str, va_list args)
{
	str = check_flags(str, obj);
	str = check_width(str, obj, args);
	str = check_precision(str, obj, args);
	str = check_type(str, obj);
	return (str);
}

void			set_default(t_format *obj)
{
	obj->dot = -1;
	obj->minus = 0;
	obj->width = -1;
	obj->zero = 0;
	obj->type = 0;
}

int				print_format(t_format *obj, va_list args)
{
	int count;

	count = 0;
	if (obj->type == 'c')
		count = print_c(obj, args);
	else if (obj->type == 's')
		count = print_s(obj, args);
	else if (obj->type == 'd' || obj->type == 'i')
		count = print_d(obj, args);
	else if (obj->type == 'u')
		count = print_u(obj, args);
	else if (obj->type == 'p')
		count = print_p(obj, args);
	else if (obj->type == 'x')
		count = print_x(obj, args);
	else if (obj->type == 'X')
		count = print_xup(obj, args);
	else if (obj->type == '%')
		count = print_percent(obj);
	return (count);
}

int				ft_parse(char *str, va_list args, int count)
{
	size_t		i;
	t_format	*obj;

	i = 0;
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			++count;
		}
		else
		{
			str++;
			if (!(obj = malloc(sizeof(t_format))))
				break ;
			set_default(obj);
			str = set_flags(obj, str, args);
			count += print_format(obj, args);
			free(obj);
		}
		str++;
	}
	return (count);
}

int				ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	count = ft_parse((char*)format, ap, count);
	va_end(ap);
	return (count);
}

int main()
{

}
