/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 16:45:24 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_left_1_4(int **tab, int nb, int i, int j)
{
	if (tab[j][0] == 1)
	{
		if (i == 1 && nb != 4)
			return (1);
	}
	if (tab[j][0] == 4)
	{
		if ((i == 1 && nb != 1) || (i == 2 && nb != 2)
				|| (i == 3 && nb != 3) || (i == 4 && nb != 4))
			return (1);
	}
	return (0);
}

int		check_left_2_3(int **tab, int nb, int i, int j)
{
	if (tab[j][0] == 2)
	{
		if ((i == 1 && nb == 4) || (i == 2 && nb == 3)
				|| (i == 2 && (nb == 2 && tab[j][1] != 3))
				|| (i == 3 && (nb == 3 && tab[j][2] != 4)))
			return (1);
	}
	if (tab[j][0] == 3)
	{
		if ((i == 1 && nb == 3) || (i == 1 && nb == 4) || (i == 2 && nb == 4)
				|| (i == 3 && (nb == 3 && tab[j][1] != 2))
				|| (i == 3 && (nb == 4 && tab[j][2] == 1)))
			return (1);
	}
	return (0);
}

int		check_right_1_4(int **tab, int nb, int i, int j)
{
	if (tab[j][5] == 1)
	{
		if (i == 4 && nb != 4)
			return (1);
	}
	if (tab[j][5] == 4)
	{
		if ((i == 4 && nb != 1) || (i == 3 && nb != 2)
				|| (i == 2 && nb != 3) || (i == 1 && nb != 4))
			return (1);
	}
	return (0);
}

int		check_right_2_3(int **tab, int nb, int i, int j)
{
	if (tab[j][5] == 2)
	{
		if ((i == 4 && nb == 4) || (i == 3 && nb == 3)
				|| (i == 3 && (nb == 3 && tab[j][4] != 3))
				|| (i == 2 && (nb == 2 && tab[j][3] != 4)))
			return (1);
	}
	if (tab[j][5] == 3)
	{
		if ((i == 4 && nb == 3) || (i == 4 && nb == 4) || (i == 3 && nb == 4)
				|| (i == 2 && (nb == 3 && tab[j][4] != 2))
				|| (i == 2 && (nb == 4 && tab[j][3] == 1)))
			return (1);
	}
	return (0);
}
