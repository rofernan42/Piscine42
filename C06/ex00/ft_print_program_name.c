/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 18:40:14 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/10 12:38:33 by rofernan         ###   ########.fr       */
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

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
