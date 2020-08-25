# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rixt <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/09 16:21:14 by rixt          #+#    #+#                  #
#    Updated: 2020/08/25 14:17:01 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = ClassContact.cpp main.cpp
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) ClassContact.hpp
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all
