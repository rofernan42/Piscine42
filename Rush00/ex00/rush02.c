/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:14:23 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 22:14:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_rect(int x, int y, int i, int j)
{
	if (j == 0)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (j == y - 1)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
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
