/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:23:01 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/23 15:42:32 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	display_arrows(int argc, char *arg)
{
	if (argc > 4)
	{
		ft_putstr("==> ");
		ft_putstr(arg);
		ft_putstr(" <==\n");
	}
}

void	ft_display_file(int file, char *argv, int argc, int nb_bytes)
{
	int		end;
	int		i;
	char	buf[BUF_SIZE + 1];

	end = 1;
	i = 0;
	while (end > 0)
	{
		end = read(file, buf, BUF_SIZE);
		if (argc > 4 && (end == -1 || end > 0))
			display_arrows(argc, argv);
		if (end != -1)
		{
			if (nb_bytes > end)
				nb_bytes = end;
			buf[end] = '\0';
			ft_putstr(&buf[end - nb_bytes]);
		}
		i++;
	}
}

void	standard_in_out(int nb_bytes)
{
	int		end;
	char	buf[BUF_SIZE];

	end = read(STDIN_FILENO, buf, BUF_SIZE);
	if (end > nb_bytes)
		ft_putstr(&buf[end - nb_bytes]);
	else
		ft_putstr(buf);
}

void	display(int argc, char **argv, int nb_bytes)
{
	int i;
	int file;
	int index;

	i = 3;
	index = 0;
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY);
		if (file == -1)
			text_error(basename(argv[0]), argv[i]);
		if (file != -1)
		{
			if (index != 0 && open(argv[i - 1], O_RDONLY) == -1)
				ft_putstr("\n");
			ft_display_file(file, argv[i], argc, nb_bytes);
			if (argc > 4 && i < argc - 1 && (open(argv[i + 1], O_RDONLY) != -1))
				ft_putstr("\n");
			index++;
		}
		close(file);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		nb_bytes;

	if (argc < 3)
		return (0);
	if (argc >= 3 && check_byte(argv[2]) == 1)
		nb_bytes = ft_atoi(argv[2]);
	else if (argc >= 3 && check_byte(argv[2]) == 0)
	{
		ft_error(basename(argv[0]));
		ft_error(": illegal offset -- ");
		ft_error(argv[2]);
		ft_error("\n");
		return (0);
	}
	if (argc == 3)
	{
		standard_in_out(nb_bytes);
		return (0);
	}
	display(argc, argv, nb_bytes);
	return (0);
}
