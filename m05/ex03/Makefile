# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/31 10:56:55 by rde-vrie      #+#    #+#                  #
#    Updated: 2021/12/13 11:51:57 by rde-vrie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex03
OBJ = main.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o \
		Bureaucrat.o Intern.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = colors.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
		PresidentialPardonForm.hpp Bureaucrat.hpp Intern.hpp
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
