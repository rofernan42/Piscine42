/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 19:39:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/09 19:55:10 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
		j--;
		ft_putchar('\n');
	}
	return (0);
}
