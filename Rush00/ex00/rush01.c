/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-loar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:14:10 by gle-loar          #+#    #+#             */
/*   Updated: 2019/07/07 22:13:21 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display_form(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || \
		(j == (y - 1) && i == (x - 1) && y > 1 && x > 1))
		ft_putchar('/');
	else if ((i == (x - 1) && j == 0) || \
(j == (y - 1) && i == 0 && y > 1))
		ft_putchar('\\');
	else if (i > 0 && j > 0 && i < (x - 1) && j < (y - 1))
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (x > 2147483647 || y > 2147483647 || x < 1)
		return ;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			display_form(x, y, i, j);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
