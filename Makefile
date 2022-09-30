# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 20:55:16 by itan              #+#    #+#              #
#    Updated: 2022/09/30 19:33:29 by itan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRC		= src
DIR_OBJ		= obj
SUBDIRS		= to str mem

SRC_DIR		= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRC)/, $(dir)))
OBJ_DIR		= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJ)/, $(dir)))
SRC			= $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))
OBJ			= $(subst $(DIR_SRC), $(DIR_OBJ), $(SRC:.c=.o))

INCLUDES	= -I includes

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

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

.PHONY:		all clean fclean re