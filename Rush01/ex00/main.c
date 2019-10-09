/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:12:44 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 17:20:15 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		check_row(int **tab, int nb, int i, int j);
int		check_col(int **tab, int nb, int i, int j);
int		check_tab(int **tab, int nb, int i, int j);
int		recursive(int **tab, int i, int j);
int		put_in_tab_row(int **tab, int *tab_arg, int k);
int		put_in_tab_col(int **tab, int *tab_arg, int k);
int		**init_border_tab(int *tab_arg);
int		**init_tab(int **tab);
int		*init_tab_arg(char **argv, int *tab_arg);
int		check_errors(int argc, char **argv);
int		check_solution_tab(int **tab);

void	print_table(int **tab)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < 4)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}

int		main(int argc, char **argv)
{
	int *tab_arg;
	int **tab;
	int i;
	int j;

	i = 0;
	j = 0;
	if (check_errors(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	tab_arg = malloc(sizeof(*tab_arg) * 16);
	tab_arg = init_tab_arg(argv, tab_arg);
	tab = init_border_tab(tab_arg);
	tab = init_tab(tab);
	recursive(tab, 1, 1);
	if (check_solution_tab(tab) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	print_table(tab);
	return (0);
}
