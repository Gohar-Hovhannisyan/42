/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:35:31 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/10 15:32:02 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef	struct	s_format
{
	int			width;
	int			zero;
	int			type;
	int			minus;
	int			dot;
}				t_format;

void			ft_putstrlen_fd(char *s, int fd, size_t len);
void			ft_puthexlo_fd(unsigned long long hx, int fd);
void			ft_puthexup_fd(unsigned long long hx, int fd);
size_t			ft_numlen(long num);
int				ft_hexlen(unsigned long long hx);
void			ft_putpointer_fd(unsigned long long hx, int fd);
void			ft_putnbru_fd(unsigned num, int fd);
char			*check_flags(char *str, t_format *obj);
char			*check_width(char *str, t_format *obj, va_list args);
char			*check_precision(char *str, t_format *obj, va_list args);
char			*check_type(char *str, t_format *obj);
int				print_d(t_format *obj, va_list args);
int				print_u(t_format *obj, va_list args);
int				print_c(t_format *obj, va_list args);
int				print_s(t_format *obj, va_list args);
int				print_p(t_format *obj, va_list args);
int				print_x(t_format *obj, va_list args);
int				print_xup(t_format *obj, va_list args);
void			ft_helps2(t_format *obj, char *str);
int				ft_helps1(t_format *obj, char *str);
int				print_percent(t_format *obj);
int				ft_printf(const char *format, ...);
int				ft_parse(char *str, va_list args, int count);
int				print_format(t_format *obj, va_list args);
void			set_default(t_format *obj);
char			*set_flags(t_format *obj, char *str, va_list args);
void			ft_print_space(int size);
void			ft_print_zero(int size);
int				ft_helpd1(t_format *obj, int num, int num_len, int og_len);
void			ft_helpd3(t_format *obj, int og_len, int num, int num_len);
int				ft_helpd2(t_format *obj, int num, int num_len, int og_len);
int				ft_helpu2(t_format *obj, unsigned int num, int num_len);
int				ft_helpu1(t_format *obj, unsigned int num, int num_len);
void			ft_helpd4(t_format *obj, int num, int num_len);
void			ft_helpu3(t_format *obj, int num_len, unsigned int num);
void			ft_helpmini(int *num);
int				ft_helpx1(t_format *obj, unsigned long long hx, int x_len);
void			ft_helpx3(t_format *obj, int x_len, unsigned long long hx);
int				ft_helpx2(t_format *obj, unsigned long long hx, int x_len);
int				ft_helpxup1(t_format *obj, unsigned long long hx, int x_len);
void			ft_helpxup3(t_format *obj, int x_len, unsigned long long hx);
int				ft_helpxup2(t_format *obj, unsigned long long hx, int x_len);
int				ft_helpp1(t_format *obj);
int				ft_helpp2(t_format *obj);
int				ft_helpp3(t_format *obj, int p_len, unsigned long long hx);

#endif
