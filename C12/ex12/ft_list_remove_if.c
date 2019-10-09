/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:10:10 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 19:59:26 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), \
		void (*free_fct)(void *))
{
	t_list *list_ptr;
	t_list *temp;
	t_list *temp2;

	list_ptr = *begin_list;
	while (list_ptr != NULL && (*cmp)(list_ptr->data, data_ref) == 0)
	{
		temp = list_ptr;
		list_ptr = list_ptr->next;
		(*free_fct)(temp->data);
		free(temp);
	}
	temp2 = list_ptr;
	while (temp2 != NULL && temp2->next != NULL)
	{
		if ((*cmp)(temp2->next->data, data_ref) == 0)
		{
			temp = temp2->next;
			temp2->next = temp2->next->next;
			(*free_fct)(temp->data);
			free(temp);
		}
		else
			temp2 = temp2->next;
	}
}
