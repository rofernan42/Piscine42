/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:56:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/11 11:56:29 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int size;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
