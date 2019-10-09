/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:04:58 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/18 15:57:01 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	operateur(char *op)
{
	int i;

	i = 0;
	while (op[i])
		i++;
	if (i != 1)
		return (0);
	if (op[0] != '+' && op[0] != '-' && op[0] != '/'
			&& op[0] != '*' && op[0] != '%')
		return (0);
	return (op[0]);
}

int		do_op(int a, char *op, int b)
{
	if (operateur(op) == '+')
		return (a + b);
	if (operateur(op) == '-')
		return (a - b);
	if (operateur(op) == '/')
		return (a / b);
	if (operateur(op) == '*')
		return (a * b);
	if (operateur(op) == '%')
		return (a % b);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (operateur(argv[2]) == '/' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (operateur(argv[2]) == '%' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3])));
	write(1, "\n", 1);
	return (0);
}
