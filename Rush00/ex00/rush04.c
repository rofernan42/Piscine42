/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:14:23 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 22:15:37 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	display_rect(int x, int y, int i, int j)
{
	if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1 && x > 1 && y > 1))
		ft_putchar('A');
	else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
		ft_putchar('C');
	else if ((j > 0 && (i == 0 || i == x - 1)) || j == 0 || j == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x > 2147483647 || y > 2147483647 || x < 1)
		return ;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			display_rect(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
