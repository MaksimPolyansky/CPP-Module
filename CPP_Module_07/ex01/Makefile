NAME =		Iter

SRC =		main.cpp

FLAGS =		-Wall -Werror -Wextra -std=c++98

OBJ = 		$(SRC:%.cpp=%.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp iter.hpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	./$(NAME)

de:
	clang++ -g $(SRC)
