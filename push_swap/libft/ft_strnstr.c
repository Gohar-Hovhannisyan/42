/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:20:03 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/22 17:48:43 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t len2;

	if (*little == '\0')
		return ((char*)big);
	len2 = ft_strlen(little);
	while (*big != '\0' && len-- >= len2)
	{
		if (*big == *little && ft_strncmp(big, little, len2) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
