NAME = Interface

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp AMateria.cpp Character.cpp Cure.cpp \
		Ice.cpp MateriaSource.cpp \

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re