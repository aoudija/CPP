NAME = RPN
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = main.cpp RPN.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
DEP = RPN.hpp

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp $(DEP)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re