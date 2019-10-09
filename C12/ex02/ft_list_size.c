/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:44:12 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 19:18:09 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*list;

	count = 0;
	list = begin_list;
	while (list != 0)
	{
		list = list->next;
		count++;
	}
	return (count);
}
