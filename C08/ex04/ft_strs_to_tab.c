/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:25:37 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/16 13:45:33 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = malloc(sizeof(*dest) * ft_strlen(src) + 1)) == 0)
		return (NULL);
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tabstruct;
	int			i;

	if (ac < 0 || !av)
		return (NULL);
	if ((tabstruct = malloc(sizeof(t_stock_str) * (ac + 1))) == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!av[i])
		{
			while (i > 0)
				free(tabstruct[--i].copy);
			free(tabstruct);
			return (NULL);
		}
		tabstruct[i].str = av[i];
		tabstruct[i].size = ft_strlen(av[i]);
		if (!(tabstruct[i].copy = ft_strdup(av[i])))
			return (NULL);
		i++;
	}
	tabstruct[i].str = 0;
	return (tabstruct);
}
