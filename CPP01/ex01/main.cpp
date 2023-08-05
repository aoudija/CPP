#include "Zombie.hpp"
void l(){
	system("leaks zombieHorde");
}
int main(){
    atexit(l);
    Zombie*  Z = zombieHorde(4, "we have the same name");
    std::cout << sizeof(Z) << '\n';
	for (int i = 0;i < 4;i++){
        Z[i].announce();
    }
	delete Z;
}
