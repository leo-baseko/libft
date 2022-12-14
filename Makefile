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
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

SRCBONUS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

SRCS = 		$(SRC)
OBJS = 		$(addsuffix .o, $(basename $(SRC)))

OBJSBONUS	= $(SRCBONUS:.c=.o)

INCS = 		$(addprefix -I, $(INCLUDE))

all : 		$(NAME)

$(NAME) : 	$(OBJS)
				ar rcs $@ $^

clean :
			$(RM) $(OBJS) $(OBJSBONUS)

fclean : 	clean
			$(RM) $(NAME)

re : 		fclean all

.c.o:		$(SRCS)
			$(CC) -c -o $@ $< $(FLAGS)

bonus :		$(OBJSBONUS)
				ar rcs $(NAME) $(OBJSBONUS)

.PHONY: all clean fclean re bonus
