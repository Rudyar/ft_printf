# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 13:46:17 by arudy             #+#    #+#              #
#    Updated: 2021/12/08 12:01:13 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 11:38:15 by arudy             #+#    #+#              #
#    Updated: 2021/11/27 14:55:09 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c \
		ft_putstr.c ft_putnbr.c \
		ft_putnbr_u.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:	${OBJS_BONUS}
			ar rc ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
