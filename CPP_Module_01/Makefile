NAME00 =	./ex00/Pony

NAME01 =	./ex01/MemoryLeak

NAME02 =	./ex02/Zombies

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

ex02: $(NAME02)
	$(NAME02)

$(NAME02):
	make -C ./ex02

clean:
	make clean -C ./ex00
	make clean -C ./ex01
	make clean -C ./ex02
	#make clean -C ./ex03

fclean:
	make fclean -C ./ex00
	make fclean -C ./ex01
	make fclean -C ./ex02
	#make fclean -C ./ex03

re: fclean all

