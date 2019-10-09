/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:21:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 22:42:49 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int					fill_first_case(char **tab_char, char *str)
{
	int k;

	k = 0;
	if (ft_strlen(str) % 3 == 1)
	{
		tab_char[0][0] = '0';
		tab_char[0][1] = '0';
		tab_char[0][2] = str[k++];
	}
	if (ft_strlen(str) % 3 == 2)
	{
		tab_char[0][0] = '0';
		tab_char[0][1] = str[k++];
		tab_char[0][2] = str[k++];
	}
	return (k);
}

char				**init_tab_char(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab_char;

	j = -1;
	if (!(tab_char = malloc(sizeof(char*) * (blocs(str) + 1))))
		return (NULL);
	while (++j < blocs(str))
	{
		if (!(tab_char[j] = malloc(sizeof(char) * 4)))
			return (NULL);
	}
	j = 0;
	if (ft_strlen(str) % 3 == 0)
		j = -1;
	k = fill_first_case(tab_char, str);
	while (++j < blocs(str))
	{
		i = 0;
		while (i < 3)
			tab_char[j][i++] = str[k++];
	}
	tab_char[j] = 0;
	return (tab_char);
}

long long int		*init_tab_int(char **tab_char, char *str)
{
	int				i;
	long long int	*tab_int;

	if (!(tab_int = malloc(sizeof(*tab_int) * (blocs(str) + 1))))
		return (NULL);
	i = 0;
	while (tab_char[i] != 0)
	{
		tab_int[i] = ft_atoi(tab_char[i]);
		i++;
	}
	free(tab_char);
	return (tab_int);
}

int					put_in_tab(char **strs_nbr, long long int *tab_int, \
		int i, int j)
{
	int temp;

	temp = tab_int[i];
	if (temp > 0)
	{
		if (temp / 100 > 0)
		{
			strs_nbr[j++] = ft_itoa(temp / 100);
			strs_nbr[j++] = ft_itoa(100);
			temp = tab_int[i] % 100;
		}
		if (temp / 100 == 0)
		{
			if ((temp / 10 <= 1 && temp % 10 > 0) || temp == 10)
				strs_nbr[j++] = ft_itoa(temp);
			else if (temp / 10 > 1)
			{
				strs_nbr[j++] = ft_itoa(temp / 10 * 10);
				if (temp % 10 != 0)
					strs_nbr[j++] = ft_itoa(temp % 10);
			}
		}
	}
	return (j);
}

char				**tab_strs(char *str, long long int *tab_int)
{
	long long int		div;
	int					i;
	int					j;
	char				**strs_nbr;

	strs_nbr = malloc(sizeof(char*) * (count_words(str) + 1));
	div = ft_recursive_power(1000, (blocs(str) - 1));
	i = 0;
	j = 0;
	while (i < blocs(str))
	{
		j = put_in_tab(strs_nbr, tab_int, i, j);
		if (tab_int[i] > 0)
			strs_nbr[j] = ft_itoa(div);
		else
			j--;
		j++;
		div = div / 1000;
		i++;
	}
	if (tab_int[i - 1] == 0)
		strs_nbr[j] = NULL;
	else
		strs_nbr[j - 1] = NULL;
	return (strs_nbr);
}
