NAME00 =	./ex00/Pony

NAME01 =	./ex01/MemoryLeak

.PHONY: all clean fclean re

all:
	@echo "Try again!"
	@echo "Use make with anyway arguments!"

ex00: $(NAME00)
	$(NAME00)

$(NAME00):
	make -C ./ex00

ex01: $(NAME01)
	$(NAME01)

$(NAME01):
	make -C ./ex01

clean:
	make clean -C ./ex00
	make clean -C ./ex01

fclean:
	make fclean -C ./ex00
	make fclean -C ./ex01

re: fclean all

