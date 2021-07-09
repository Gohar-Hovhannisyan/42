/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghovhann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:00:32 by ghovhann          #+#    #+#             */
/*   Updated: 2021/01/24 12:41:20 by ghovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (!lst && new)
		*lst = new;
}
