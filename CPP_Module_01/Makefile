NAME00 =		Pony

SRC00 =			./ex00/Pony.cpp ./ex00/main.cpp

OBJ00 = 		$(SRC00:%.cpp=%.o)

FLAGS =			-Wall -Werror -Wextra

.PHONY: all clean fclean re

all:
	@echo "Try again!"
	@echo "Use make with anyway arguments!"

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

ex00: $(NAME00)

$(NAME00): $(OBJ00)
	clang++ $(FLAGS) $(OBJ00) -o $(NAME00)

clean:
	rm -rf $(OBJ00)

fclean: clean
	rm -rf $(NAME00)

re: fclean all

test: re
	./$(NAME)

de:
	clang++ -g $(SRC)
