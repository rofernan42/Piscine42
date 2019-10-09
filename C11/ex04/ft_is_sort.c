/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:06:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/19 13:19:42 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;
	if (length == 0 || length == 1)
		return (1);
	while ((*f)(tab[i - 1], tab[i]) <= 0)
	{
		i++;
		if (i == length)
			return (1);
	}
	i = 1;
	while ((*f)(tab[i - 1], tab[i]) >= 0)
	{
		i++;
		if (i == length)
			return (1);
	}
	return (0);
}
