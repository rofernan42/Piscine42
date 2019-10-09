/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:11:08 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/21 22:34:54 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRUSH_H
# define LIBRUSH_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define DICT_SIZE 4096

int					ft_atoi(char *str);
char				**ft_split(char *str, char *charset);
char				*ft_strstr(char *str, char *to_find);
char				*ft_itoa(long long int nbr);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);
char				*ft_strjoin(int size, char **strs, char *sep);
int					blocs(char *str);
int					count_words(char *str);
int					check_zero(char *str);
char				*move_zeros(char *str);
int					fill_first_case(char **tab_char, char *str);
char				**init_tab_char(char *str);
long long int		*init_tab_int(char **tab_char, char *str);
int					put_in_tab(char **strs_nbr, long long int *tab_int, \
		int i, int j);
char				**tab_strs(char *str, long long int *tab_int);
char				**compare_with_dict(char **strs_nbr, char *dict, char *str);
void				display_number(char **strs);
int					general_display(char *str, char *dict);
int					check_dict(char *dict);
int					ft_check_numbers(char *str);
int					check_errors(char *dict, char *str);
void				ft_putstr(char *str);
long long int		ft_recursive_power(long long int nb, int power);

#endif
