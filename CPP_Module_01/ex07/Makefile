NAME =		replace

SRC =		replace.cpp

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
	rm -rf *.replace

re: fclean all

test: re
	./$(NAME) heusebio h bla

de:
	clang++ -g $(SRC)
