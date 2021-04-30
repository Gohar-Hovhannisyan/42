/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:32:08 by ghovhann          #+#    #+#             */
/*   Updated: 2021/02/13 12:32:10 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int					get_next_line(int fd, char **line);
int					has_new_line(char *str);
size_t				ft_strlen(const char *s);
char				*ft_strjoin(const char *s1, const char *s2);
char	            *get_save(char *save);
char	            *get_line(char *str);
void		        *ft_memmove(void *dst, const void *src, size_t len);

#endif