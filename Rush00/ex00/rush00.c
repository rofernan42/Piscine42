/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:02:13 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 22:14:04 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_rect(int x, int y, int i, int j)
{
	if (j == 0 || j == (y - 1))
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	if (j > 0 && j < y - 1)
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
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
		while (i < x)
		{
			display_rect(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
