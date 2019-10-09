# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:30:13 by rofernan          #+#    #+#              #
#    Updated: 2019/07/19 09:38:17 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

SRCS	=	./srcs/do_op.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I./includes

RM		=	rm -f

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all