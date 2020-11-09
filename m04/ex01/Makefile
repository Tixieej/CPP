# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/11/09 13:56:32 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01
OBJ = main.o AWeapon.o PlasmaRifle.o PowerFist.o Enemy.o SuperMutant.o RadScorpion.o Character.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp Enemy.hpp SuperMutant.hpp RadScorpion.hpp Character.hpp
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
