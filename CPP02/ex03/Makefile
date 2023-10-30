NAME = fixed

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Fixed.cpp main.cpp bsp.cpp Point.cpp

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re