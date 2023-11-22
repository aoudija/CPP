NAME = typeinfo

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = A.cpp B.cpp Base.cpp C.cpp main.cpp

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re