/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:25:46 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/23 11:50:59 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_in_str(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;
	size_t	i;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_str(set, s1[start]))
		start++;
	while (end > start && ft_is_in_str(set, s1[end - 1]))
		end--;
	if (!(new = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	while (start < end)
	{
		new[i++] = s1[start];
		++start;
	}
	new[i] = 0;
	return (new);
}
