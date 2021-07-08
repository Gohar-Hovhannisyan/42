/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 10:43:03 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/23 10:48:37 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(new, s, len);
	*(new + len) = '\0';
	return (new);
}
