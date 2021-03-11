# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heusebio <heusebio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/21 19:53:06 by heusebio          #+#    #+#              #
#    Updated: 2021/03/11 19:29:12 by heusebio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		crappy_phonebook

SRC =		phonebook.cpp

FLAGS =		-Wall -Werror -Wextra

OBJ = 		$(SRC:%.cpp=%.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	./crappy_phonebook

de:
	clang++ -g phonebook.cpp
