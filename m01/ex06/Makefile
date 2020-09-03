# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/09/03 22:30:08 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex06
OBJ = main.o Weapon.o HumanA.o HumanB.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = Weapon.hpp HumanA.hpp HumanB.hpp

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
