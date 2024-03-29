/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:54:30 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/11 21:14:26 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\r' || base[i] == '\v'
				|| base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	sign_number(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
				|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	while (str[i])
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
				|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
			return (0);
		else
			break ;
	}
	return (sign);
}

int	compare_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c != base[i])
			i++;
		else
			return (i);
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	if (!check_base(base))
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
				|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
				|| str[i] == '-' || str[i] == '+')
			i++;
		else
			break ;
	}
	while (str[i])
	{
		if (compare_base(str[i], base) != -1)
			nb = nb * ft_strlen(base) + compare_base(str[i], base);
		else
			return (sign_number(str) * nb);
		i++;
	}
	return (sign_number(str) * nb);
}
