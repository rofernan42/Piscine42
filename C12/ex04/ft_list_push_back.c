/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:01:45 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 19:12:47 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	list = *begin_list;
	while (list->next != NULL)
		list = list->next;
	list->next = ft_create_elem(data);
}
