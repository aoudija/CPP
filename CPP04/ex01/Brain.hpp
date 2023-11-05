#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    std::string idea[100];
    public:
        Brain();
        Brain(Brain& br);
        const Brain& operator=(Brain& br);
        ~Brain();
		void	SetIdeas();
		std::string	GetIdeas(int i);
        void    setidea(std::string s, int i);
};


#endif