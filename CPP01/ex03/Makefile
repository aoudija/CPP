NAME = Uviolence

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBG = $(FILES:.c=.o)

all:
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re