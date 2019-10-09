/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:49:00 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/18 19:04:46 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] - s2[i]) == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if ((s1[i] - s2[i]) != 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 1;
	while (tab[i] != 0)
	{
		if ((*cmp)(tab[i - 1], tab[i]) > 0)
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
			i = 1;
		}
		else
			i++;
	}
}
