/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:58:12 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/30 12:13:01 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	i = 0;
	ptr = (unsigned char*)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == character)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
