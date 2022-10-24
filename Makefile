# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 20:55:16 by itan              #+#    #+#              #
#    Updated: 2022/10/20 17:44:39 by itan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

DIR_SRC_N		= src
DIR_OBJ_N		= obj
SUBDIRS			= to str mem add_ft conditions converts is put lst

SRC_DIR			= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRC_N)/, $(dir)))
OBJ_DIR			= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJ_N)/, $(dir)))
SRC				= $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))
OBJ				= $(subst $(DIR_SRC_N), $(DIR_OBJ_N), $(SRC:.c=.o))

INCLUDES		= -I includes

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

TEST			= ~/Libftest/grademe.sh

$(DIR_OBJ_N)/%.o :	$(DIR_SRC_N)/%.c
			@mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

bonus:		$(NAME)

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) -r $(DIR_OBJ_N)

re:			fclean all

dir:
			mkdir -p $(OBJ_DIR)

test: 
			@$(TEST)
			@../libft-unit-test/run_test

deep:
			@less ~/Libftest/deepthought

.PHONY:		all clean fclean re test deep bonus