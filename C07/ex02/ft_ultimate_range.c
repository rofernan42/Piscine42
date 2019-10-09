/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:57:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 18:38:29 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = malloc(sizeof(int*) * size);
	if (range == NULL)
		return (-1);
	while (i < size)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
