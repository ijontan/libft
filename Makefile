# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 20:55:16 by itan              #+#    #+#              #
#    Updated: 2022/10/04 16:46:16 by itan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRC		= src
DIR_OBJ		= obj
SUBDIRS		= to str mem add_ft conditions converts is

SRC_DIR		= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRC)/, $(dir)))
OBJ_DIR		= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJ)/, $(dir)))
SRC			= $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))
OBJ			= $(subst $(DIR_SRC), $(DIR_OBJ), $(SRC:.c=.o))

INCLUDES	= -I includes

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

TEST = ~/Libftest/grademe.sh

$(DIR_OBJ)/%.o :	$(DIR_SRC)/%.c
			mkdir -p $(DIR_OBJ) $(OBJ_DIR)
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) -r $(DIR_OBJ)

re:			fclean all

test: 
			$(TEST)

.PHONY:		all clean fclean re