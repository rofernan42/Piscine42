/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:40:12 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 20:02:19 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *list;
	t_list *temp;

	list = begin_list;
	while (list != NULL)
	{
		temp = list->next;
		free_fct(list->data);
		free(list);
		list = temp;
	}
}
