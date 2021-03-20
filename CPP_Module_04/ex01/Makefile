NAME =		Poly

SRC =		main.cpp AWeapon.cpp RadScorpion.cpp Enemy.cpp PowerFist.cpp Character.cpp PlasmaRifle.cpp SuperMutant.cpp

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
	./$(NAME)

de:
	clang++ -g $(SRC)
