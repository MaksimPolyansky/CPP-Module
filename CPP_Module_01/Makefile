NAME00 =	./ex00/Pony

NAME01 =	./ex01/MemoryLeak

NAME02 =	./ex02/Zombies

NAME03 =	./ex03/Zombies

NAME04 =	./ex04/Brain

NAME05 =	./ex05/Brains_Human

NAME06 =	./ex06/mini_War

NAME07 =	./ex07/replace

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

ex03: $(NAME03)
	$(NAME03)

$(NAME03):
	make -C ./ex03

ex04: $(NAME04)
	$(NAME04)

$(NAME04):
	make -C ./ex04

ex05: $(NAME05)
	$(NAME05)

$(NAME05):
	make -C ./ex05

ex06: $(NAME06)
	$(NAME06)

$(NAME06):
	make -C ./ex06

ex07: $(NAME07)
	$(NAME07)

$(NAME07):
	make -C ./ex07

clean:
	make clean -C ./ex00
	make clean -C ./ex01
	make clean -C ./ex02
	make clean -C ./ex03
	make clean -C ./ex04
	make clean -C ./ex05
	make clean -C ./ex06
	make clean -C ./ex07

fclean:
	make fclean -C ./ex00
	make fclean -C ./ex01
	make fclean -C ./ex02
	make fclean -C ./ex03
	make fclean -C ./ex04
	make fclean -C ./ex05
	make fclean -C ./ex06
	make fclean -C ./ex07

re: fclean all

