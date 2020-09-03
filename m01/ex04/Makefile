# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2020/09/03 16:04:56 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex04
OBJ = ex04.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
