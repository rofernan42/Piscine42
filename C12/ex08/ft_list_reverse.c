/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:44:19 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 17:27:29 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *temp;
	t_list *temp2;

	list = *begin_list;
	temp = list->next;
	temp2 = temp->next;
	list->next = NULL;
	temp->next = list;
	while (temp2 != 0)
	{
		list = temp;
		temp = temp2;
		temp->next = list;
		temp2 = temp2->next;
	}
	*begin_list = temp;
}
