/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:22:04 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/13 13:04:13 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int		new_word(char previous_c, char current_c, char *charset)
{
	if (word_sep(previous_c, charset) == 1 && word_sep(current_c, charset) == 0)
		return (1);
	else
		return (0);
}

int		nb_words(char *str, char *charset)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if ((i == 0 && word_sep(str[i], charset) == 0)
				|| (new_word(str[i - 1], str[i], charset)))
			nb++;
		i++;
	}
	return (nb);
}

int		*size_word(char *str, char *charset)
{
	int *tabsize;
	int i;
	int j;

	i = 0;
	tabsize = malloc(sizeof(*tabsize) * nb_words(str, charset));
	while (i < nb_words(str, charset))
	{
		tabsize[i] = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		if (word_sep(str[i], charset) == 0)
			tabsize[j]++;
		else if (i > 0 && word_sep(str[i - 1], charset) == 0)
			j++;
		i++;
	}
	return (tabsize);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	dest = malloc(sizeof(*dest) * nb_words(str, charset) + 1);
	while (str[i])
	{
		if (word_sep(str[i], charset) == 0)
		{
			if (i == 0 || new_word(str[i - 1], str[i], charset) == 1)
				dest[j] = malloc(sizeof(dest) * size_word(str, charset)[j] + 1);
			dest[j][k] = str[i];
			dest[j][k + 1] = '\0';
			k++;
		}
		else if (i > 0 && word_sep(str[i - 1], charset) == 0 && ++j)
			k = 0;
		i++;
	}
	dest[nb_words(str, charset)] = 0;
	return (dest);
}
