/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:55:41 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/23 10:42:19 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *new;

	if (!(new = malloc(nmemb * size)))
	{
		return (NULL);
	}
	ft_memset(new, 0, nmemb * size);
	return (new);
}
