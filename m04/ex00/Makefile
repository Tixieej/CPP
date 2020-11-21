# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/11/21 13:03:35 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex00
OBJ = main.o Sorcerer.o Victim.o Peon.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = colors.hpp Sorcerer.hpp Victim.hpp Peon.hpp

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
