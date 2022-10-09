# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 15:38:32 by ldrieske          #+#    #+#              #
#    Updated: 2022/10/09 15:54:07 by ldrieske         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isaplha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strrchr.c \
			ft_strnchr.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \

OBJS	=	$(SRCS.c=.o)

DIR_INC	=	./
INCLUDE	=	libft.h

CC		=	cc
FLAGS	=	-Wall -Werror -Wextra

all		:	$(NAME)

.c.o	:	$(SRCS)
			$(CC) $(FLAGS) -I $(DIR_INC) -c $< -o $@

$(NAME)	:	$(OBJS) $(INCLUDE)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:
			rm -r $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
