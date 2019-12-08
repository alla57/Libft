# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alboumed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 12:42:16 by alboumed          #+#    #+#              #
#    Updated: 2019/12/08 18:55:52 by alboumed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

RM		=	rm -rf

NAME	=	libft.a

SRCS	=	./ft_isascii.c		\
			./ft_memcmp.c		\
			./ft_putnbr_fd.c	\
			./ft_strlcat.c		\
			./ft_strrchr.c		\
			./ft_atoi.c			\
			./ft_isdigit.c		\
			./ft_memcpy.c		\
			./ft_putstr_fd.c	\
			./ft_strlcpy.c		\
			./ft_strtrim.c		\
			./ft_bzero.c		\
			./ft_isprint.c		\
			./ft_memmove.c		\
			./ft_split.c		\
			./ft_strlen.c		\
			./ft_substr.c		\
			./ft_calloc.c		\
			./ft_itoa.c			\
			./ft_memset.c		\
			./ft_strchr.c		\
			./ft_strmapi.c		\
			./ft_tolower.c		\
			./ft_isalnum.c		\
			./ft_memccpy.c		\
			./ft_putchar_fd.c	\
			./ft_strdup.c		\
			./ft_strncmp.c		\
			./ft_toupper.c		\
			./ft_isalpha.c		\
			./ft_memchr.c		\
			./ft_putendl_fd.c	\
			./ft_strjoin.c		\
			./ft_strnstr.c		\
			./ft_isascii.c		\
			./ft_memcmp.c		\
			./ft_putnbr_fd.c	\
			./ft_strlcat.c		\
			./ft_strrchr.c		\

SRC_BNS	=	./ft_lstnew.c		\
			./ft_lstadd_front.c	\
			./ft_lstsize.c		\
			./ft_lstlast.c		\
			./ft_lstadd_back.c	\
			./ft_lstdelone.c	\
			./ft_lstclear.c		\
			./ft_lstiter.c		\
			./ft_lstmap.c		\

OBJS	=	$(SRCS:.c=.o)

OBJ_BNS	=	$(SRC_BNS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -I./includes

AR		= 	ar rc

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			ranlib $(NAME)

bonus	 :	$(OBJ_BNS)
			$(AR) $(NAME) $(OBJ_BNS)
			ranlib $(NAME)

clean :
			$(RM) $(OBJS)
			$(RM) $(OBJ_BNS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean all
