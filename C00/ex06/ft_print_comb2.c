/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 18:47:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/04 16:23:49 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + '0');
			ft_putchar(nb1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + '0');
			ft_putchar(nb2 % 10 + '0');
			if (nb1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
		nb2 = nb1 + 1;
	}
}
