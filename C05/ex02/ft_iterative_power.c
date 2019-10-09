/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:46:45 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/08 19:12:55 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int nb_power;

	i = 0;
	nb_power = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb_power = nb_power * nb;
		i++;
	}
	return (nb_power);
}
