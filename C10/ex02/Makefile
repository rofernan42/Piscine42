# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:30:13 by rofernan          #+#    #+#              #
#    Updated: 2019/07/21 23:51:36 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_tail

SRCS	=	./srcs/ft_tail.c \
			./srcs/ft_atoi.c \
			./srcs/ft_strs.c \
			./srcs/check_errors.c

HEADER	=	./includes/functions.h

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