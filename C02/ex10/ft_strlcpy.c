/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:52:13 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/07 14:47:13 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (!dest || !src)
		return (0);
	while (src[j] != '\0' && j < size - 1 && size > 0)
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}
