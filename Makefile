# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 15:30:06 by passunca          #+#    #+#              #
#    Updated: 2024/02/14 11:32:52 by passunca         ###   ########.fr        #
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
		ft_atod.c ft_isspace.c ft_strcmp.c ft_stolower.c ft_sep.c ft_dtoa.c \
		ft_pow.c ft_atoi_base.c ft_absd.c)

PRINTF_PATH	= ./ft_printf
PRINTF_SRC 	= $(addprefix $(PRINTF_PATH)/, ft_printf.c ft_flag_utils.c \
			  ft_flags.c ft_parse.c ft_print_c.c ft_print_di.c ft_print_hex.c \
			  ft_print_p.c ft_print_s.c ft_print_u.c ft_print_f.c)

GNL_PATH 	= ./get_next_line
GNL_SRC		= $(addprefix $(GNL_PATH)/, get_next_line.c get_next_line_utils.c)

OBJS		= $(addprefix $(BUILD_PATH)/, $(notdir $(SRC:.c=.o)))
BONUS_OBJS	= $(addprefix $(BUILD_PATH)/, $(notdir $(BONUS:.c=.o)))
EXTRA_OBJS	= $(addprefix $(BUILD_PATH)/, $(notdir $(EXTRA:.c=.o)))
PRINTF_OBJS	= $(addprefix $(BUILD_PATH)/, $(notdir $(PRINTF_SRC:.c=.o)))
GNL_OBJS	= $(addprefix $(BUILD_PATH)/, $(notdir $(GNL_SRC:.c=.o)))

### Message Vars
_SUCCESS 		= [$(GRN)SUCCESS$(D)]
_INFO 			= [$(BLU)INFO$(D)]
_NORM 			= [$(YEL)Norminette$(D)]
_NORM_SUCCESS 	= $(GRN)=== OK:$(D)
_NORM_INFO 		= $(BLU)File no:$(D)

#==============================================================================#
#                            FLAGS & CMDS                                      #
#==============================================================================#

MAKE		= make -C
CFLAGS		= -Wall -Wextra -Werror
CFLAGS		+= -g
# CFLAGS		+= -lm
INCLUDE 	= -I.

CC 			= cc
RM 			= rm -rf
AR 			= ar rcs
MKDIR_P		= mkdir -p

#==============================================================================#
#                                  RULES                                       #
#==============================================================================#

##@ Libft Compilation Rules 🏗

all: $(NAME)	## Compile Basic libft

$(BUILD_PATH):
	$(MKDIR_P) $(BUILD_PATH)
	@echo "* $(YEL)Creating $(BUILD_PATH) folder:$(D) $(_SUCCESS)"

$(BUILD_PATH)/%.o: $(LIBFT_PATH)/%.c
	@echo -n "$(GRN)█$(D)"
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_PATH)/%.o: $(PRINTF_PATH)/%.c
	@echo -n "$(GRN)█$(D)"
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_PATH)/%.o: $(GNL_PATH)/%.c
	@echo -n "$(GRN)█$(D)"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(BUILD_PATH) $(OBJS)
	@echo "* $(YEL)Archiving $(NAME) archive$(D)"
	$(AR) $(NAME) $(OBJS)
	@echo "* $(MAG)libft$(D) archived: $(_SUCCESS) $(YEL)🖔$(D)"

bonus: $(BUILD_PATH) $(OBJS) $(BONUS_OBJS)	## Compile libft with bonus
	@echo "* $(YEL)Archiving $(NAME) w/ bonus$(D)"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "* $(MAG)libft$(D) archived w/ bonus: $(_SUCCESS) $(YEL)🖔$(D)"

extra: $(BUILD_PATH) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS) ## Compile libft with extra
	@echo "* $(YEL)Archiving $(NAME) w/ extras$(D)"
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "* $(MAG)libft$(D) archived w/ extras: $(_SUCCESS) $(YEL)🖔$(D)"

##@ Test, Debug & Leak Check Rules 󰃢

norm: 		## Run norminette test
	@printf "${_NORM}\n"
	@printf "${_NORM_INFO} "
	@norminette $(SRC_PATH) | wc -l
	@norminette $(SRC_PATH)
	@printf "${_NORM_SUCCESS} "
	@norminette $(SRC_PATH) | grep -wc "OK"

##@ Clean-up Rules 󰃢

clean:			## Clean libft binaries
	@echo "* $(YEL)Removing libft binaries$(D)"
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "* $(YEL)Cleaning libft binaries!$(D) $(_SUCCESS) $(YEL)🖔$(D)"

fclean: clean	## Clean libft archive
	@echo "* $(YEL)Removing $(NAME) archive and .build directory$(D)"
	$(RM) $(NAME)
	$(RM) $(BUILD_PATH)
	@echo "* Cleaning $(NAME) archive and .build directory! $(_SUCCESS) $(YEL)🖔$(D)"

re: fclean extra	## Clean and re-compile libft
	@echo "* Cleaning & re-compiling libft!=: $(_SUCCESS) $(YEL)🖔$(D)"

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

