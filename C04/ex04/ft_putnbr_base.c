/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 19:10:02 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/08 16:06:01 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base_content(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
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

int		check_char(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] < 48 || (base[i] > 57 && base[i] < 65)
				|| (base[i] > 90 && base[i] < 97) || base[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int temp;
	unsigned int size;

	size = 0;
	if (!check_base_content(base) || !check_char(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		temp = -nbr;
	}
	else
		temp = nbr;
	while (base[size])
		size++;
	if (temp < size)
		ft_putchar(base[temp % size]);
	else
	{
		ft_putnbr_base(temp / size, base);
		ft_putchar(base[temp % size]);
	}
}
