NAME = DiamondTrap

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98  -Wshadow -Wno-shadow

FILES = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re