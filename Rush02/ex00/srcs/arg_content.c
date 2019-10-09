/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:21:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 20:25:55 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int		blocs(char *str)
{
	int len;
	int nb_blocs;

	len = ft_strlen(str);
	nb_blocs = len / 3;
	if (len % 3 > 0)
		nb_blocs++;
	return (nb_blocs);
}

int		count_words(char *str)
{
	int i;
	int len;
	int count;

	i = 0;
	len = ft_strlen(str);
	count = 0;
	while (len > 0)
	{
		if (i == 3)
		{
			count = count + 2;
			i = 0;
		}
		if (i == 0 && str[len - 1] >= '0')
			count++;
		if (i == 1 && str[len - 1] > '0')
			count++;
		if (i == 2 && str[len - 1] > '0')
			count = count + 2;
		len--;
		i++;
	}
	return (count);
}

int		check_zero(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

char	*move_zeros(char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (str[i] == '0')
		i++;
	while (i + j < len)
	{
		str[j] = str[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
