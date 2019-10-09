/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:46:33 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/23 12:18:46 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 28672

void	ft_putstr_out(char *str, int file)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(file, &str[i], 1);
		i++;
	}
}

void	ft_display_file(int file, char *prog, char *argv)
{
	int		end;
	char	buf[BUF_SIZE + 1];

	end = 1;
	while (end > 0)
	{
		end = read(file, buf, BUF_SIZE);
		if (end == -1)
		{
			ft_putstr_out(basename(prog), 2);
			ft_putstr_out(": ", 2);
			ft_putstr_out(argv, 2);
			ft_putstr_out(": ", 2);
			ft_putstr_out(strerror(errno), 2);
			ft_putstr_out("\n", 2);
		}
		buf[end] = '\0';
		ft_putstr_out(buf, 1);
	}
}

void	missing_arg(void)
{
	char c;

	while (read(0, &c, 1))
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		file;
	int		i;

	if (argc < 2 || argv[1][0] == '-')
		missing_arg();
	i = 1;
	while (i < argc)
	{
		errno = 0;
		file = open(argv[i], O_RDONLY);
		if (file == -1)
		{
			ft_putstr_out(basename(argv[0]), 2);
			ft_putstr_out(": ", 2);
			ft_putstr_out(argv[i], 2);
			ft_putstr_out(": ", 2);
			ft_putstr_out(strerror(errno), 2);
			ft_putstr_out("\n", 2);
		}
		else
			ft_display_file(file, argv[0], argv[i]);
		close(file);
		i++;
	}
	return (0);
}
