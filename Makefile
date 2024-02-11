# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 15:30:06 by passunca          #+#    #+#              #
#    Updated: 2024/02/11 20:22:36 by passunca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### LIBFT ####
#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#

NAME =	libft.a

BUILD_PATH	= .build
LIBFT_PATH = ./libft
SRC =	$(addprefix $(LIBFT_PATH)/, ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c)

BONUS = $(addprefix $(LIBFT_PATH)/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c)

EXTRA = $(addprefix $(LIBFT_PATH)/, ft_putendl_fd.c ft_putnchar_fd.c \
		ft_putstrn_fd.c ft_numlen.c ft_uputnbr.c ft_putchar.c ft_putnbr.c \
		ft_unumlen.c ft_uitoa.c ft_xtoa.c ft_abs.c ft_argb.c ft_perror.c \
		ft_atod.c ft_isspace.c ft_strcmp.c ft_stolower.c ft_sep.c)

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

#==============================================================================#
#                            FLAGS & CMDS                                      #
#==============================================================================#

MAKE		= make -C
CFLAGS		= -Wall -Wextra -Werror
INCLUDE 	= -I .
CC 			= cc
RM 			= rm -f
AR 			= ar rcs

#==============================================================================#
#                                  RULES                                       #
#==============================================================================#

##@ Libft Compilation Rules 🏗

$(BUILD_PATH):
	$(MKDIR_P) $(BUILD_PATH)

$(BUILD_PATH)/%.o: $(LIBFT_PATH)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	@echo "[$(YEL)Compiling libft$(D)]"
	$(AR) $(NAME) $(OBJS)
	@echo "[$(GRN)SUCCESS$(D) creating $(MAG)libft's archive!$(D) $(YEL)🖔$(D)]"

all: $(NAME)	## Compile Basic libft
	@echo "[$(GRN)SUCCESS$(D) compiling $(MAG)libft!$(D) $(YEL)🖔$(D)]"

bonus: $(OBJS) $(BONUS_OBJS)	## Compile libft with bonus
	@echo "[$(YEL)Compiling libft w/ bonus:$(D)]"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "[$(GRN)SUCCESS$(D) compiling $(MAG)libft with bonus!$(D) $(YEL)🖔$(D)]"

extra: $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS) ## Compile libft with extra
	@echo "[$(YEL)Compiling libft w/ extra:$(D)]"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "[$(GRN)SUCCESS$(D) compiling $(MAG)libft with extras!$(D) $(YEL)🖔$(D)]"

deps:	## Download/Update ft_printf & get_next_line
	@if test ! -d "$(FT_PRINTF_PATH_PATH)"; then make get_ft_printf; \
		else echo "$(YEL)[ft_printf]$(D) folder found"; fi
	@if test ! -d "$(GNL_PATH)"; then make get_gnl; \
		else echo "$(YEL)[get_next_line]$(D) folder found"; fi
	@make update_modules

update_modules:	## Update modules
	@echo "[$(CYA)Updating submodules$(D)]"
	git submodule init
	git submodule update --recursive --remote
	@echo "[$(GRN)Submodules successfully updated$(D)]"

get_ft_printf:
	@echo "[$(CYA)Getting ft_printf submodule$(D)]"
	git clone git@github.com:PedroZappa/ft_printf.git $(LIBFT_PATH)
	@echo "[$(GRN)ft_printf submodule successfully downloaded$(D)]"

get_gnl:
	@echo "[$(CYA)Getting get_next_line submodule$(D)]"
	git clone git@github.com:PedroZappa/get_next_line.git $(LIBFT_PATH)
	@echo "[$(GRN)get_next_line submodule successfully downloaded$(D)]"


##@ Clean-up Rules 󰃢

clean:			## Clean libft binaries
	@echo "[$(RED)Removing libft binaries$(D)]"
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "[$(GRN)SUCCESS$(D) cleaning libft binaries! $(YEL)🖔$(D)]"

fclean: clean	## Clean libft archive
	$(RM) $(NAME)
	@echo "[$(GRN)SUCCESS$(D) cleaning libft archive! $(YEL)🖔$(D)]"

libclean: fclean	## Remove libft & mlx
	@echo "[$(RED)Cleaning ft_printf 󰃢$(D)]"
	$(RM) $(FT_PRINTF_PATH)
	@echo "==> $(GRN)ft_printf folder successfully removed!$(D)\n"
	$(RM) $(GNL_PATH)
	@echo "==> $(GRN)get_next_line folder successfully removed!$(D)\n"

re: fclean extra	## Clean and re-compile libft
	@echo "[$(GRN)SUCCESS$(D) cleaning re-compiling libft! $(YEL)🖔$(D)]"

##@ Help 󰛵

help: 			## Display this help page
	@awk 'BEGIN {FS = ":.*##"; \
			printf "\n=> Usage:\n\tmake $(GRN)<target>$(D)\n"} \
		/^[a-zA-Z_0-9-]+:.*?##/ { \
			printf "\t$(GRN)%-15s$(D) %s\n", $$1, $$2 } \
		/^##@/ { \
			printf "\n=> %s\n", substr($$0, 5) } ' Makefile

.PHONY: all bonus extra clean fclean re help

#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#

# Colors
#
# Run the following command to get list of available colors
# bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'
#
B  		= $(shell tput bold)
BLA		= $(shell tput setaf 0)
RED		= $(shell tput setaf 1)
GRN		= $(shell tput setaf 2)
YEL		= $(shell tput setaf 3)
BLU		= $(shell tput setaf 4)
MAG		= $(shell tput setaf 5)
CYA		= $(shell tput setaf 6)
WHI		= $(shell tput setaf 7)
GRE		= $(shell tput setaf 8)
BRED 	= $(shell tput setaf 9)
BGRN	= $(shell tput setaf 10)
BYEL	= $(shell tput setaf 11)
BBLU	= $(shell tput setaf 12)
BMAG	= $(shell tput setaf 13)
BCYA	= $(shell tput setaf 14)
BWHI	= $(shell tput setaf 15)
D 		= $(shell tput sgr0)
BEL 	= $(shell tput bel)
CLR 	= $(shell tput el 1)

