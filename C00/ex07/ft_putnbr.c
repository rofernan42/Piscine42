/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 19:16:10 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/04 12:55:12 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = -nb;
	}
	else
		temp = nb;
	if (temp < 10)
		ft_putchar(temp + '0');
	else
	{
		ft_putnbr(temp / 10);
		ft_putchar(temp % 10 + '0');
	}
}
