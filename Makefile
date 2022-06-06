# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 10:55:09 by mmidon            #+#    #+#              #
#    Updated: 2022/06/04 09:40:23 by mmidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= push_swap.c sort_all.c binary.c sort_five.c operations/push.c operations/reverse_rotate.c operations/rotate.c operations/swap.c utils/ft_power.c utils/ft_lstadd_back.c  utils/ft_memset.c utils/ft_putstrv2.c utils/display.c  utils/ft_lstadd_front.c utils/ft_printf.c utils/ft_split.c sort_few.c utils/error.c utils/ft_put_p.c utils/ft_strcmp.c utils/fill.c utils/ft_putcharv2.c utils/ft_strdup.c utils/ft_atoi.c utils/ft_puthexa.c utils/ft_strlen.c utils/ft_bzero.c utils/ft_lstlast.c utils/ft_putnbr_p.c utils/list.c utils/ft_calloc.c utils/ft_putnbrhexa.c utils/ft_isdigit.c utils/ft_lstnew.c utils/ft_putnbru2.c utils/ft_itoa.c utils/ft_lstsize.c utils/ft_putnbrv2.c

OBJS	=  ${SRCS:.c=.o}

NAME	= push_swap
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}

	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
