# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/11/20 17:44:08 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex03
OBJ = main.o AMateria.o #Ice.o Cure.o Character.o MateriaSource.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = colors.hpp AMateria.hpp #Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
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
