# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rixt <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/09 16:21:14 by rixt          #+#    #+#                  #
#    Updated: 2020/08/10 10:16:01 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all
