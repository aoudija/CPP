NAME = Abstract

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re