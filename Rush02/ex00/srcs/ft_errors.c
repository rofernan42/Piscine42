/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:21:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 21:21:30 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int		check_dict(char *dict)
{
	int i;

	i = 0;
	while (dict[i])
	{
		while (dict[i] >= '0' && dict[i] <= '9')
			i++;
		if (dict[i] != ' ' && dict[i] != ':')
			return (0);
		while (dict[i] == ' ')
			i++;
		if (dict[i] != ':')
			return (0);
		while (dict[i] >= ' ' && dict[i] <= '~')
			i++;
		if (dict[i] != '\n' && dict[i] != '\0')
			return (0);
		while (dict[i] == '\n')
			i++;
	}
	return (1);
}

int		ft_check_numbers(char *str)
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

int		check_errors(char *dict, char *str)
{
	if (check_dict(dict) == 0)
	{
		ft_putstr("Dict Error \n");
		return (0);
	}
	if (ft_check_numbers(str) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
