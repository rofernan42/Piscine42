/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:00:09 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/17 17:13:17 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_queen(int *tab, int pos, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (tab[j] == pos)
			return (1);
		if (i - j == pos - tab[j])
			return (1);
		if (i - j == tab[j] - pos)
			return (1);
		j++;
	}
	return (0);
}

void	print_solutions(int *tab)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	recursive(int *tab, int *nb_solutions, int i)
{
	int pos;

	if (i == 10)
	{
		print_solutions(tab);
		*nb_solutions = *nb_solutions + 1;
	}
	pos = 0;
	while (pos < 10)
	{
		if (check_queen(tab, pos, i) == 0)
		{
			tab[i] = pos;
			recursive(tab, nb_solutions, i + 1);
		}
		pos++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int tab[10];
	int nb_solutions;

	nb_solutions = 0;
	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	recursive(tab, &nb_solutions, 0);
	return (nb_solutions);
}
