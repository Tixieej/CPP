# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rixt <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/09 16:21:14 by rixt          #+#    #+#                  #
#    Updated: 2020/08/11 22:45:25 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = ClassContact.cpp main.cpp
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all
