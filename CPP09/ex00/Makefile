NAME = btc
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = main.cpp BitcoinExchange.cpp
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