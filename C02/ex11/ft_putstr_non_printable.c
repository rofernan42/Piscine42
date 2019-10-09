/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:38:06 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 15:00:57 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while ((unsigned char)str[i] != '\0')
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar((unsigned char)str[i] / 16 + '0');
			if ((unsigned char)str[i] % 16 >= 10)
				ft_putchar((unsigned char)str[i] % 16 - 10 + 'a');
			else
				ft_putchar((unsigned char)str[i] % 16 + '0');
		}
		else
			ft_putchar((unsigned char)str[i]);
		i++;
	}
}
