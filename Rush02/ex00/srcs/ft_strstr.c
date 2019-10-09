/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:40:33 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 21:20:55 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0' && (str[i + j] == ' ' || str[i + j] == ':')
				&& ((str[i - 1] == '\n') || i == 0))
		{
			while (str[i + j] == ' ' || str[i + j] == ':')
				j++;
			i = i + j;
			j = 0;
			while (str[i + j] != '\n' && str[i + j] != '\0')
				j++;
			str[i + j] = '\0';
			return (&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
