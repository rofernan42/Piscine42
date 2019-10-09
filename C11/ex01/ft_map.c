/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:11:19 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/17 21:57:52 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *res;
	int i;

	if ((res = malloc(sizeof(*res) * length)) == 0)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
