/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:26:42 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 19:21:27 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		i;

	i = 0;
	list = begin_list;
	while (i < nbr)
	{
		if (list == NULL)
			return (NULL);
		list = list->next;
		i++;
	}
	return (list);
}
