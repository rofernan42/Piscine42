/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:12:45 by rofernan          #+#    #+#             */
/*   Updated: 2019/07/22 20:31:02 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <fcntl.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>
# define BUF_SIZE 100000

int		ft_atoi(char *str);
void	ft_error(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		check_byte(char *str);
void	text_error(char *prog_name, char *arg);

#endif
