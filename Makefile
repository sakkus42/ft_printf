# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emyuksel <emyuksel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 10:50:33 by emyuksel          #+#    #+#              #
#    Updated: 2022/07/14 11:31:42 by emyuksel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_printf.h \
		ft_print_hex.c \
		ft_print_itoa.c \
		ft_print_unsigned.c \
		ft_ptr_adress.c \
		ft_write.c \


		
OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f


.c.o:
		${CC} g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
