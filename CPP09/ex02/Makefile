NAME = PmergeMe
CPP = c++ -g
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = main.cpp PmergeMe.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

fclean:
	rm -f $(NAME) $(OBJ_FILES)

re: fclean all

.PHONY: all fclean re