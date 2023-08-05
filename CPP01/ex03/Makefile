NAME = Uviolence

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBG = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBG)
	$(CPP) $(CFLAGS) $(OBG) -o $(NAME)

%.o : %.c
	$(CPP) $(CFLAGS) -c $<

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY:all fclean re