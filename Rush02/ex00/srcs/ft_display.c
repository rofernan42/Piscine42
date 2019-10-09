/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:21:21 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 20:25:44 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

char	**compare_with_dict(char **strs_nbr, char *dict, char *str)
{
	char	**convert_nbrs;
	char	*temp;
	int		i;

	i = 0;
	if (!(convert_nbrs = malloc(sizeof(char*) * (count_words(str) + 1))))
		return (NULL);
	if (check_zero(str) == 1)
	{
		temp = ft_strdup(dict);
		convert_nbrs[0] = ft_strstr(temp, "0");
		i = 1;
	}
	while (strs_nbr[i] != NULL && !check_zero(str))
	{
		temp = ft_strdup(dict);
		if ((convert_nbrs[i] = ft_strstr(temp, strs_nbr[i])) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	convert_nbrs[i] = NULL;
	return (convert_nbrs);
}

void	display_number(char **strs)
{
	int size;

	size = 0;
	while (strs[size] != 0)
		size++;
	ft_putstr(ft_strjoin(size, strs, " "));
	write(1, "\n", 1);
}

int		general_display(char *str, char *dict)
{
	char **convert_nbrs;

	str = move_zeros(str);
	if ((convert_nbrs = compare_with_dict(tab_strs(str, \
						init_tab_int(init_tab_char(str), str)), \
					dict, str)) == 0)
		return (0);
	display_number(convert_nbrs);
	free(convert_nbrs);
	return (1);
}
