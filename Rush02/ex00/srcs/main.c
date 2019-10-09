/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:21:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 22:41:34 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

long long int		ft_recursive_power(long long int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int					open_dict(int argc, char *str)
{
	int fd;

	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	if (argc == 3)
		fd = open(str, O_RDONLY);
	return (fd);
}

int					main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	dict[DICT_SIZE + 1];
	int		res;

	if (argc > 3 || argc == 1)
		return (0);
	fd = open_dict(argc, argv[1]);
	if (fd == -1 || (res = read(fd, dict, DICT_SIZE)) == -1)
	{
		close(fd);
		ft_putstr("Dict Error\n");
		return (0);
	}
	i = argc - 1;
	dict[res] = '\0';
	if (check_errors(dict, argv[i]) == 0)
	{
		close(fd);
		return (0);
	}
	general_display(argv[i], dict);
	close(fd);
	return (0);
}
