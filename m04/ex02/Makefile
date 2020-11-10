# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/11/10 18:40:15 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02
OBJ = main.o Squad.o TacticalMarine.o AssaultTerminator.o
CC = clang++
FLAGS = #-Wall -Werror -Wextra -std=c++98
INC = Squad.hpp TacticalMarine.hpp AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp
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
