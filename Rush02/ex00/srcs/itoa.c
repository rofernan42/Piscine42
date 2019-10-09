/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbouju <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:08:00 by elbouju           #+#    #+#             */
/*   Updated: 2019/07/21 22:39:48 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nb_length(long long int nbr)
{
	int				i;
	long long int	tmp;

	i = 0;
	tmp = nbr;
	if (tmp < 0)
	{
		i++;
		tmp *= -1;
	}
	while (tmp > 0)
	{
		i++;
		tmp /= 10;
	}
	return (i);
}

char	*ft_itoa(long long int nbr)
{
	char			*str;
	int				i;
	long long int	tmp;

	if (nbr == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = nb_length(nbr);
	str = malloc(sizeof(char) * i + 1);
	str[i] = '\0';
	tmp = nbr < 0 ? -nbr : nbr;
	while (i > 0)
	{
		str[i - 1] = (tmp % 10) + 48;
		tmp /= 10;
		i--;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}
