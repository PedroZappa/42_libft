NAME =	libft.a

LIBFT_PATH = ./libft
SRC =	$(addprefix $(LIBFT_PATH)/, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c)

BONUS = $(addprefix $(LIBFT_PATH)/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)

EXTRA = $(addprefix $(LIBFT_PATH)/, ft_putendl_fd.c ft_putnchar_fd.c ft_putstrn_fd.c \
		ft_numlen.c ft_uputnbr.c ft_putchar.c ft_putnbr.c ft_unumlen.c ft_uitoa.c ft_xtoa.c)

PRINTF_PATH	= ./ft_printf
PRINTF_SRC 	= $(addprefix $(PRINTF_PATH)/, ft_printf.c ft_flag_utils.c \
			  ft_flags.c ft_parse.c ft_print_c.c ft_print_di.c \
			  ft_print_hex.c ft_print_p.c ft_print_s.c ft_print_u.c)

GNL_PATH 	= ./get_next_line
GNL_SRC		= $(addprefix $(GNL_PATH)/, get_next_line.c get_next_line_utils.c)

OBJS		= $(SRC:.c=.o) 
BONUS_OBJS	= $(BONUS:.c=.o)
EXTRA_OBJS	= $(EXTRA:.c=.o)
PRINTF_OBJS	= $(PRINTF:.c=.o)
GNL_OBJS	= $(GNL:.c=.o)

MAKE		= make -C
CFLAGS		= -Wall -Wextra -Werror
INCLUDE 	= -I .
CC 			= cc
RM 			= rm -f	
AR 			= ar rcs


.o:.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

all: $(NAME)
	@echo "SUCCESS compiling libft! 🖔"

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "SUCCESS compiling libft with bonus! 🖔"

extra: $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "Compiling libft w/ extra:"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "SUCCESS compiling libft with extras! 🖔"

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean extra	

.PHONY: all clean fclean re bonus
