/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 17:07:24 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		check_errors(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		return (1);
	while (argv[1][i])
	{
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
			return (1);
		else if (i % 2 == 1 && argv[1][i] != ' ')
			return (1);
		else
			i++;
	}
	if (ft_strlen(argv[1]) > 31 || ft_strlen(argv[1]) < 31)
		return (1);
	return (0);
}

int		check_solution_tab(int **tab)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j < 5)
	{
		while (i < 5)
		{
			if (tab[j][i] == 0)
				return (0);
			i++;
		}
		j++;
		i = 1;
	}
	return (1);
}
