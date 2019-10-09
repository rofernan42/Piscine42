/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 19:56:48 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/10 12:27:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s1[i] - s2[i] != 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	display_arg(char **str, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < size)
	{
		while (str[j][i])
		{
			ft_putchar(str[j][i]);
			i++;
		}
		i = 0;
		j++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	display_arg(argv, argc);
	return (0);
}
