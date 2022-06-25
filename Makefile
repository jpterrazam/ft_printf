# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 02:48:40 by jpaulo-d          #+#    #+#              #
#    Updated: 2022/06/20 21:40:56 by jpaulo-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c \
			ft_printf_text.c \
			ft_printf_number.c \
			ft_printf_pointer.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
C_LIB = ar rc
S_LIB	= ranlib
CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

MAKE_LIBFT = cd libft && make
CP_LIBFT = cp ./libft/libft.a $(NAME)
FCLEAN_LIBFT = cd libft && make fclean

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
			$(MAKE_LIBFT)
			$(CP_LIBFT)
			$(FCLEAN_LIBFT)
			$(C_LIB) $(NAME) $(OBJS)
			${S_LIB} ${NAME}

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
