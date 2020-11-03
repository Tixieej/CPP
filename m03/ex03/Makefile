# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/11/03 11:33:13 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex03
OBJ = main.o FragTrap.o ScavTrap.o ClapTrap.o NinjaTrap.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp

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
