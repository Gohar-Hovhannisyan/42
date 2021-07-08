/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:51:28 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/24 12:40:10 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static	int			word_len(char const *s, char c)
{
	int len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static	int			word_count(char const *s, char c)
{
	int	wd_count;
	int	is_wd;

	wd_count = 0;
	is_wd = 0;
	while (*s)
	{
		if (is_wd == 0 && *s != c)
		{
			is_wd = 1;
			wd_count++;
		}
		else if (is_wd == 1 && *s == c)
			is_wd = 0;
		s++;
	}
	return (wd_count);
}

static	char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char				**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	i = 0;
	if (!(tab = malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		if (!(tab[i] = malloc(sizeof(char) * len + 1)))
			return (ft_malloc_error(tab));
		tab[i] = ft_strncpy(tab[i], s, len);
		tab[i][len] = 0;
		i++;
		s = s + len;
	}
	tab[i] = NULL;
	return (tab);
}
