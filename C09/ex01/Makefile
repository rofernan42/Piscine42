# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 20:50:02 by rofernan          #+#    #+#              #
#    Updated: 2019/07/16 19:59:08 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c \
				./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS		=	${SRCS:%.c=%.o}

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -I./includes

RM			=	rm -f

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re