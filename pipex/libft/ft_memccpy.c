/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:58:49 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/22 13:48:11 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char *ptr2;

	ptr = dest;
	ptr2 = src;
	i = 0;
	while (ptr2[i] != c && i < n)
	{
		*ptr = ptr2[i];
		i++;
		ptr++;
	}
	if (i < n)
	{
		*ptr = ptr2[i];
		ptr++;
		++i;
	}
	return (dest + i);
}
