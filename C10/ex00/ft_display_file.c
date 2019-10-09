/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:57:07 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/23 10:22:20 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 30000

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		file;
	int		end;
	char	tab[BUF_SIZE + 1];

	if (argc < 2 || argc > 2)
	{
		if (argc < 2)
			ft_error("File name missing.\n");
		if (argc > 2)
			ft_error("Too many arguments.\n");
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		ft_error("Cannot read file.\n");
		return (1);
	}
	while ((end = read(file, tab, BUF_SIZE)))
		write(1, tab, end);
	close(file);
	return (0);
}
