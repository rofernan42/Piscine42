/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 20:11:27 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/03 23:15:30 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char nbr[] = "0123456789";
	int i;
	int j;
	int k;

	i = 0;
	j = n;
	k = 1;
	while (k <= n)
	{
		while (j <= 10)
		{
			while (i < n)
			{
				ft_putchar(nbr[i]);
				i++;
			}
			ft_putchar(',');
			ft_putchar(' ');
			i = 0;
			nbr[n - 1] = j + '0';
			j++;
		}
		j = n;
		k++;
		nbr[n - k]++;
		nbr[n - k + 1] = nbr[n - k] + 1;
	}
}