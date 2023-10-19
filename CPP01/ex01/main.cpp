#include "Zombie.hpp"

int main()
{
    Zombie*  Z = zombieHorde(4, "X");
	for (int i = 0;i < 4;i++){
        Z[i].announce();std::cout << i << '\n';
    }
	delete [] Z;
}
