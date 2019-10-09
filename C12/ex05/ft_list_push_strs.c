/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:39:17 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 19:16:30 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	i = 1;
	if (size == 0)
		return (NULL);
	temp = ft_create_elem(strs[0]);
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}
