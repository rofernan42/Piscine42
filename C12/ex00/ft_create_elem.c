/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:50:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/25 20:01:50 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}
