# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:30:13 by rofernan          #+#    #+#              #
#    Updated: 2019/07/22 22:29:06 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

SRCS	=	./ft_display_file.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all