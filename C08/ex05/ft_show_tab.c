/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:40:31 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/15 16:42:29 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void				print_size(int nb)
{
	if (nb >= 10)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

void				ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].str);
		ft_putchar('\n');
		print_size(par[i].size);
		ft_putchar('\n');
		print_str(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
