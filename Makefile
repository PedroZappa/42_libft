CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a
SRC =  ft_isalpha.c ft_isdigit.c ft_isalnum.c 
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rc $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	
