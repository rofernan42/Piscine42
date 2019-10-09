/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:35:26 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/08 17:45:19 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
