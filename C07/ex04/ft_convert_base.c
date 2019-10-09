/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:28:02 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/12 13:57:06 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *base);
int		check_base(char *base);

int		ft_size_dest(char *nbr, char *base_from, char *base_to)
{
	int size_dest;
	int nb_int;

	size_dest = 1;
	if (ft_atoi_base(nbr, base_from) < 0)
		nb_int = -ft_atoi_base(nbr, base_from);
	else
		nb_int = ft_atoi_base(nbr, base_from);
	while ((nb_int / ft_strlen(base_to)) > 0)
	{
		nb_int = nb_int / ft_strlen(base_to);
		size_dest++;
	}
	return (size_dest);
}

char	*ft_dest_nbr(int nb_int, int size_dest, char *base_to, char *dest_nbr)
{
	if (nb_int < 0)
	{
		nb_int = -nb_int;
		while (size_dest > 0)
		{
			dest_nbr[size_dest] = base_to[nb_int % ft_strlen(base_to)];
			nb_int = nb_int / ft_strlen(base_to);
			size_dest--;
		}
	}
	else
	{
		while (size_dest > 0)
		{
			dest_nbr[size_dest - 1] = base_to[nb_int % ft_strlen(base_to)];
			nb_int = nb_int / ft_strlen(base_to);
			size_dest--;
		}
	}
	return (dest_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*dest_nbr;
	int		size_dest;
	int		nb_int;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	size_dest = ft_size_dest(nbr, base_from, base_to);
	nb_int = ft_atoi_base(nbr, base_from);
	if (nb_int < 0)
	{
		dest_nbr = malloc(sizeof(*dest_nbr) * (size_dest + 2));
		dest_nbr[0] = '-';
		dest_nbr[size_dest + 1] = '\0';
	}
	else
	{
		dest_nbr = malloc(sizeof(*dest_nbr) * (size_dest + 1));
		dest_nbr[size_dest] = '\0';
	}
	dest_nbr = ft_dest_nbr(nb_int, size_dest, base_to, dest_nbr);
	return (dest_nbr);
}
