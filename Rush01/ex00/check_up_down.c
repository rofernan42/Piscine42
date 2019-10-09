/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 16:47:58 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_up_1_4(int **tab, int nb, int i, int j)
{
	if (tab[0][i] == 1)
	{
		if (j == 1 && nb != 4)
			return (1);
	}
	if (tab[0][i] == 4)
	{
		if ((j == 1 && nb != 1) || (j == 2 && nb != 2)
				|| (j == 3 && nb != 3) || (j == 4 && nb != 4))
			return (1);
	}
	return (0);
}

int		check_up_2_3(int **tab, int nb, int i, int j)
{
	if (tab[0][i] == 2)
	{
		if ((j == 1 && nb == 4) || (j == 2 && nb == 3)
				|| (j == 2 && (nb == 2 && tab[1][i] != 3))
				|| (j == 3 && (nb == 3 && tab[2][i] != 4)))
			return (1);
	}
	if (tab[0][i] == 3)
	{
		if ((j == 1 && nb == 3) || (j == 1 && nb == 4) || (j == 2 && nb == 4)
				|| (j == 3 && (nb == 3 && tab[1][i] != 2))
				|| (j == 3 && (nb == 4 && tab[2][i] == 1)))
			return (1);
	}
	return (0);
}

int		check_down_1_4(int **tab, int nb, int i, int j)
{
	if (tab[5][i] == 1)
	{
		if (j == 4 && nb != 4)
			return (1);
	}
	if (tab[5][i] == 4)
	{
		if ((j == 4 && nb != 1) || (j == 3 && nb != 2)
				|| (j == 2 && nb != 3) || (j == 1 && nb != 4))
			return (1);
	}
	return (0);
}

int		check_down_2_3(int **tab, int nb, int i, int j)
{
	if (tab[5][i] == 2)
	{
		if ((j == 4 && nb == 4) || (j == 3 && nb == 3)
				|| (j == 3 && (nb == 3 && tab[4][i] != 3))
				|| (j == 2 && (nb == 2 && tab[3][i] != 4)))
			return (1);
	}
	if (tab[5][i] == 3)
	{
		if ((j == 4 && nb == 3) || (j == 4 && nb == 4) || (j == 3 && nb == 4)
				|| (j == 2 && (nb == 3 && tab[4][i] != 2))
				|| (j == 2 && (nb == 4 && tab[3][i] == 1)))
			return (1);
	}
	return (0);
}
