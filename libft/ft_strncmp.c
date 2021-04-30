/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:49:51 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/22 17:52:42 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (!diff && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	if (diff == 0)
	{
		if (ft_strlen(s1) > ft_strlen(s2) && ft_strlen(s2) < n)
			return (1);
		else if (ft_strlen(s1) < ft_strlen(s2) && ft_strlen(s1) < n)
			return (-1);
	}
	return (diff);
}
