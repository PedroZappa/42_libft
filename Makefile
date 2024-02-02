
#### LIBFT ####

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
		ft_numlen.c ft_uputnbr.c ft_putchar.c ft_putnbr.c ft_unumlen.c ft_uitoa.c ft_xtoa.c \
		ft_argb.c ft_perror.c)

PRINTF_PATH	= ./ft_printf
PRINTF_SRC 	= $(addprefix $(PRINTF_PATH)/, ft_printf.c ft_flag_utils.c \
			  ft_flags.c ft_parse.c ft_print_c.c ft_print_di.c \
			  ft_print_hex.c ft_print_p.c ft_print_s.c ft_print_u.c)

GNL_PATH 	= ./get_next_line
GNL_SRC		= $(addprefix $(GNL_PATH)/, get_next_line.c get_next_line_utils.c)

OBJS		= $(SRC:.c=.o) 
BONUS_OBJS	= $(BONUS:.c=.o)
EXTRA_OBJS	= $(EXTRA:.c=.o)
PRINTF_OBJS	= $(PRINTF_SRC:.c=.o)
GNL_OBJS	= $(GNL_SRC:.c=.o)

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

##@ General

.phony: help
help: 			## Show help
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m<target>\033[0m\n"} /^[a-zA-Z_0-9-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' Makefile

##@ Compile Rules 🏗

.PHONY: all
all: $(NAME)	## Compile Basic libft
	@echo "==> $(GRN)SUCCESS$(NC) compiling libft! $(YEL)🖔$(NC)"

.PHONY: bonus
bonus: $(OBJS) $(BONUS_OBJS)	## Compile libft with bonus
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "==> $(GRN)SUCCESS$(NC) compiling libft with bonus! $(YEL)🖔$(NC)"

.PHONY: extra	## Compile libft with extra
extra: $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "Compiling libft w/ extra:"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "==> $(GRN)SUCCESS$(NC) compiling libft with extras! $(YEL)🖔$(NC)"

##@ Clean-up Rules 󰃢

.PHONY: clean
clean:			## Clean libft binaries 
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "==> $(GRN)SUCCESS$(NC) cleaning libft binaries! $(YEL)🖔$(NC)" 

.PHONY: fclean
fclean: clean	## Clean libft archive
	$(RM) $(NAME)
	@echo "==> $(GRN)SUCCESS$(NC) cleaning libft archive! $(YEL)🖔$(NC)" 

.PHONY: re
re: fclean extra	## Clean and re-compile libft
	@echo "==> $(GRN)SUCCESS$(NC) cleaning re-compiling libft! $(YEL)🖔$(NC)"	


### ANSI Color Codes ###
# Regular text
BLK = \033[0;30m
RED = \033[0;31m
GRN = \033[0;32m
YEL = \033[0;33m
BLU = \033[0;34m
MAG = \033[0;35m
CYN = \033[0;36m
WHT = \033[0;37m

# Regular bold text
BBLK = \033[1;30m
BRED = \033[1;31m
BGRN = \033[1;32m
BYEL = \033[1;33m
BBLU = \033[1;34m
BMAG = \033[1;35m
BCYN = \033[1;36m
BWHT = \033[1;37m

# Regular underline text
UBLK = \033[4;30m
URED = \033[4;31m
UGRN = \033[4;32m
UYEL = \033[4;33m
UBLU = \033[4;34m
UMAG = \033[4;35m
UCYN = \033[4;36m
UWHT = \033[4;37m

# Regular background
BLKB = \033[40m
REDB = \033[41m
GRNB = \033[42m
YELB = \033[43m
BLUB = \033[44m
MAGB = \033[45m
CYNB = \033[46m
WHTB = \033[47m

# High intensity background 
BLKHB = \033[0;100m
REDHB = \033[0;101m
GRNHB = \033[0;102m
YELHB = \033[0;103m
BLUHB = \033[0;104m
MAGHB = \033[0;105m
CYNHB = \033[0;106m
WHTHB = \033[0;107m

# High intensity text
HBLK = \033[0;90m
HRED = \033[0;91m
HGRN = \033[0;92m
HYEL = \033[0;93m
HBLU = \033[0;94m
HMAG = \033[0;95m
HCYN = \033[0;96m
HWHT = \033[0;97m

# Bold high intensity text
BHBLK = \033[1;90m
BHRED = \033[1;91m
BHGRN = \033[1;92m
BHYEL = \033[1;93m
BHBLU = \033[1;94m
BHMAG = \033[1;95m
BHCYN = \033[1;96m
BHWHT = \033[1;97m

# Reset
NC=\033[0m

