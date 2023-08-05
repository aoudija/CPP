NAME = zombieHorde

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp newZombie.cpp randomchump.cpp Zombie.cpp

all :
	$(CPP) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re