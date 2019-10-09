# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:30:13 by rofernan          #+#    #+#              #
#    Updated: 2019/07/21 20:27:39 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRCS	=	./srcs/main.c \
			./srcs/ft_atoi.c \
			./srcs/itoa.c \
			./srcs/ft_strdup.c \
			./srcs/ft_strjoin.c \
			./srcs/ft_strstr.c \
			./srcs/arg_content.c \
			./srcs/ft_display.c \
			./srcs/ft_errors.c \
			./srcs/ft_tabs.c

HEADER	=	./includes/librush.h

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