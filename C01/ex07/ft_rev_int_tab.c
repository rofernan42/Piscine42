/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:20:09 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/04 14:57:50 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;
	int temp;

	i = 0;
	j = 0;
	k = size;
	while (j < size)
	{
		while (i < k - 1)
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i++;
		}
		i = 0;
		j++;
		k--;
	}
}
