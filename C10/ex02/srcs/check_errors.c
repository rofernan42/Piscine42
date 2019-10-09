/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:23:01 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/22 20:29:08 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		check_byte(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	text_error(char *prog_name, char *arg)
{
	ft_error(prog_name);
	ft_error(": ");
	ft_error(arg);
	ft_error(": ");
	ft_error(strerror(errno));
	ft_error("\n");
}
