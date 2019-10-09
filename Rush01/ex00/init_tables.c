/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 17:18:33 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		put_in_tab_row(int **tab, int *tab_arg, int k)
{
	int i;

	i = 1;
	while (i < 5)
	{
		tab[0][i] = tab_arg[k];
		k++;
		i++;
	}
	i = 1;
	while (i < 5)
	{
		tab[5][i] = tab_arg[k];
		k++;
		i++;
	}
	return (k);
}

int		put_in_tab_col(int **tab, int *tab_arg, int k)
{
	int j;

	j = 1;
	while (j < 5)
	{
		tab[j][0] = tab_arg[k];
		k++;
		j++;
	}
	j = 1;
	while (j < 5)
	{
		tab[j][5] = tab_arg[k];
		k++;
		j++;
	}
	return (k);
}

int		**init_border_tab(int *tab_arg)
{
	int k;
	int **tab;

	k = 0;
	tab = malloc(sizeof(tab) * 6);
	while (k < 6)
	{
		tab[k] = malloc(sizeof(tab) * 6);
		k++;
	}
	k = 0;
	k = put_in_tab_row(tab, tab_arg, k);
	k = put_in_tab_col(tab, tab_arg, k);
	return (tab);
}

int		**init_tab(int **tab)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 1;
	k = 0;
	while (i < 5)
	{
		while (j < 5)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
		j = 1;
	}
	return (tab);
}

int		*init_tab_arg(char **argv, int *tab_arg)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		tab_arg[j] = ft_atoi(&argv[1][i]);
		i = i + 2;
		j++;
	}
	return (tab_arg);
}
