/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:13:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/14 17:57:14 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		size_strs;
	int		size_join;
	int		i;

	i = -1;
	size_strs = 0;
	while (++i < size)
		size_strs = size_strs + ft_strlen(strs[i]);
	size_join = (ft_strlen(sep) * (size)) + size_strs;
	if (!(join = malloc(sizeof(*join) * size_join + 1)))
		return (NULL);
	i = 1;
	join = ft_strcpy(join, strs[0]);
	while (i < size)
	{
		join = ft_strcat(join, sep);
		join = ft_strcat(join, strs[i]);
		i++;
	}
	join[size_join] = '\0';
	return (join);
}
