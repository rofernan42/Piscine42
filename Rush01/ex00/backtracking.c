/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 17:06:26 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_up_1_4(int **tab, int nb, int i, int j);
int		check_up_2_3(int **tab, int nb, int i, int j);
int		check_down_1_4(int **tab, int nb, int i, int j);
int		check_down_2_3(int **tab, int nb, int i, int j);
int		check_left_1_4(int **tab, int nb, int i, int j);
int		check_left_2_3(int **tab, int nb, int i, int j);
int		check_right_1_4(int **tab, int nb, int i, int j);
int		check_right_2_3(int **tab, int nb, int i, int j);

int		check_row(int **tab, int nb, int i, int j)
{
	int k;

	k = 1;
	while (k < i)
	{
		if (tab[j][k] == nb)
			return (1);
		else
			k++;
	}
	return (0);
}

int		check_col(int **tab, int nb, int i, int j)
{
	int k;

	k = 1;
	while (k < j)
	{
		if (tab[k][i] == nb)
			return (1);
		else
			k++;
	}
	return (0);
}

int		check_tab(int **tab, int nb, int i, int j)
{
	if (check_row(tab, nb, i, j))
		return (1);
	if (check_col(tab, nb, i, j))
		return (1);
	if (check_up_1_4(tab, nb, i, j) || check_up_2_3(tab, nb, i, j))
		return (1);
	if (check_down_1_4(tab, nb, i, j) || check_down_2_3(tab, nb, i, j))
		return (1);
	if (check_left_1_4(tab, nb, i, j) || check_left_2_3(tab, nb, i, j))
		return (1);
	if (check_right_1_4(tab, nb, i, j) || check_right_2_3(tab, nb, i, j))
		return (1);
	return (0);
}

int		recursive(int **tab, int i, int j)
{
	int nb;

	if (i > 4)
	{
		j++;
		i = 1;
	}
	nb = 1;
	if (j < 5)
	{
		while (nb < 5)
		{
			if (check_tab(tab, nb, i, j) == 0)
			{
				tab[j][i] = nb;
				if (recursive(tab, i + 1, j) == 0)
					nb++;
			}
			nb++;
		}
	}
	return (0);
}
