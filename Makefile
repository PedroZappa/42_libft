NAME = libft.a
SRC =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	   ft_memcmp.c
OBJS = $(SRC:.c=.o) 

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f
AR = ar rcs


.o:.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: all clean fclean re


