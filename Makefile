NAME = 		libft.a

RM = 		rm -rf
CC = 		gcc
FLAGS = 	-Wall -Werror -Wextra

INCLUDE	=	libft.h \

SRC =		ft_isalnum.c \
		 	ft_isalpha.c \
		 	ft_isascii.c \
		 	ft_isdigit.c \
		 	ft_isprint.c \
		 	ft_toupper.c \
		 	ft_tolower.c \
		 	ft_bzero.c \
		 	ft_memcpy.c \
		 	ft_memmove.c \
		 	ft_memset.c \
		 	ft_calloc.c \
		 	ft_memchr.c \
		 	ft_memcmp.c \
		 	ft_strlen.c \
		 	ft_strchr.c \
		 	ft_strrchr.c \
		 	ft_strncmp.c \
		 	ft_strnstr.c \
		 	ft_strlcpy.c \
		 	ft_strlcat.c \
		 	ft_strdup.c \
	 		ft_atoi.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c


SRCS = 		$(SRC)
OBJS = 		$(addsuffix .o, $(basename $(SRC)))

INCS = 		$(addprefix -I, $(INCLUDE))

all : 		$(NAME)

$(NAME) : 	$(OBJS)
				ar rcs $@ $^

clean :
			$(RM) $(OBJS)

fclean : 	clean
			$(RM) $(NAME)

re : 		fclean all

.c.o:		$(SRCS)
			$(CC) -c -o $@ $< $(FLAGS)

.PHONY: clean re fclean all bonus
