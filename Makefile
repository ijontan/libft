# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 20:55:16 by itan              #+#    #+#              #
#    Updated: 2023/02/28 20:12:26 by itan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC_DIR	= src
OBJ_DIR	= obj

# this is for mirroring the out dir
OBJ_DIRS= $(subst $(SRC_DIR), $(OBJ_DIR), $(shell find src -type d))

SRC		= $(shell find $(SRC_DIR) -name '*.c')
OBJ		= $(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
INC		= $(addprefix -I , $(shell find includes -type d))

# this is for debugging
DNAME	= debug.out
DDIR	= test
DFLAGS	= -fsanitize=address -fdiagnostics-color=always -g3
DSRC	= $(shell find $(DDIR) -name '*.c')
DOBJ	= $(DSRC:.c=.o)

# ** COLORS ** #
BLACK		= \x1B[30m
RED			= \x1B[31m
GREEN		= \x1B[32m
YELLOW		= \x1B[33m
BLUE		= \x1B[34m
MAGENTA		= \x1B[35m
CYAN		= \x1B[36m
WHITE		= \x1B[37m
B_BLACK		= \x1B[40m
B_RED		= \x1B[41m
B_GREEN		= \x1B[42m
B_YELLOW	= \x1B[43m
B_BLUE		= \x1B[44m
B_MAGENTA	= \x1B[45m
B_CYAN		= \x1B[46m
B_WHITE		= \x1B[47m
BRIGHT		= \x1B[1m
NORMAL		= \x1B[0m
BLINK		= \x1B[4m
REVERSE		= \x1B[5m
UNDERLINE	= \x1B[3m

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
				@mkdir -p $(OBJ_DIRS)
				@printf "$(YELLOW)$(BRIGHT)Generating %25s\t$(NORMAL)%040s\r" "$(NAME) src objects..." $@
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(DDIR)/%.o:	$(DDIR)/%.c
				@mkdir -p $(DDIR)
				@printf "$(YELLOW)$(BRIGHT)Generating %25s\t$(NORMAL)%040s\r" "$(NAME) debug objects..." $@
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME):	$(OBJ)
			@printf "\n$(MAGENTA)$(BRIGHT)Compiling $(NAME)...          \n"
			@ar -rcs $(NAME) $(OBJ)
			@printf "$(GREEN)COMPLETE!!\n\n"

$(DNAME):	$(SRC) $(DSRC)
			@printf "\n$(MAGENTA)Compiling $(DNAME) for $(NAME)...          \n"
			@$(CC) $(CFLAGS) $(DFLAGS) $(INC) $(SRC) $(DSRC) -o $(DNAME)
			@printf "$(GREEN)COMPLETE!!\n\n"

debug:	$(DNAME)

all:	$(NAME)

bonus:	$(NAME)

clean:
		@printf "$(RED)$(BRIGHT)Removing $(NAME) objects...\n$(NORMAL)"
		@$(RM) $(OBJ) $(DOBJ)

fclean:	clean
		@printf "$(RED)$(BRIGHT)Deleting $(NAME) and $(DNAME)...\n\n$(NORMAL)"
		@$(RM) $(NAME)
		@$(RM) $(DNAME)
		@$(RM) -r $(OBJ_DIR)

re:			fclean all

.PHONY: all clean fclean re debug bonus

norm:
		@norminette $(SRC_DIR) includes/