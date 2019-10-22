# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alboumed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 12:42:16 by alboumed          #+#    #+#              #
#    Updated: 2019/10/22 19:14:00 by alboumed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

RM		=	rm -rf

NAME	=	libft.a

SRCS	=	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -I./includes

AR		= 	ar rc

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			ranlib $(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean all
