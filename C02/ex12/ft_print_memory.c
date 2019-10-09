/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:04:14 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 12:04:41 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		nb_lines(unsigned int size)
{
	unsigned int nb;

	nb = size / 16;
	if (nb % 16 > 0)
		nb++;
	return (nb);
}

void	display_hexa(char *str, int ind_hexa)
{
	int i;

	i = 0;
	if (str[ind_hexa] == '\0')
	{
		while (i < (16 - 53 % 16))
		{
			ft_putchar(' ');
			i++;
		}
		return;
	}
	ft_putchar(str[ind_hexa] / 16 + '0');
	if (str[ind_hexa] % 16 >= 10)
		ft_putchar(str[ind_hexa] % 16 - 10 + 'a');
	else
		ft_putchar(str[ind_hexa] % 16 + '0');
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int j;
	int ind_hexa;
	int ind_str;
	int line;

	i = 0;
	ind_hexa = 0;
	ind_str = 0;
	line = 0;
	while (line < nb_lines(size))
	{
		while (i < 8)
		{
			j = 0;
			while (j < 2 && str[ind_hexa] != '\0')
			{
				display_hexa(str, ind_hexa);
				ind_hexa++;
				j++;
			}
			i++;
			ft_putchar(' ');
		}
		i = 0;
		while (i < 16)
		{
			if ((str[ind_str] < 32 && str[ind_str] > 0) || str[ind_str] == 127)
				ft_putchar('.');
			else if (str[ind_str] == '\0')
					break ;
			else
				ft_putchar(str[ind_str]);
			ind_str++;
			i++;
		}
		ft_putchar('\n');
		i = 0;
		line++;
	}
	return(addr);
}
