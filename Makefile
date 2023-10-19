NAME =	libft.a
SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

EXTRA = ft_putnchar_fd.c ft_putstrn_fd.c

OBJS =			$(SRC:.c=.o) 
BONUS_OBJS =	$(BONUS:.c=.o)
EXTRA_OBJS =	$(EXTRA:.c=.o)

CFLAGS	= -Wall -Wextra -Werror
INCLUDE = -I .
CC =	cc
RM =	rm -f	
AR =	ar rcs


.o:.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

extra: $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS)
	
clean: 
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: all clean fclean re bonus
