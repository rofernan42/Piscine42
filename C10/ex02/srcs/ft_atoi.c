/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 21:09:43 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/09 10:58:41 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign_number(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f'
				|| str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\v'))
		i++;
	while (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else
			return (0);
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f'
				|| str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\v'
				|| str[i] == '-' || str[i] == '+')
			i++;
		else
			break ;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + str[i] - '0';
		else
			return (sign_number(str) * nb);
		i++;
	}
	return (sign_number(str) * nb);
}
