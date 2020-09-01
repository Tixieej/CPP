# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/09/01 14:14:45 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01
OBJ = ex01.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98

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
