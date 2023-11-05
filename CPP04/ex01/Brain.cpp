#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor\n";
}

Brain::Brain(Brain& br){
	*this = br;
	std::cout << "Brain Copy Cnstructor\n";
}

const Brain& Brain::operator=(Brain& br){
	for (int i = 0; i < 100; i++){
		idea[i] = br.idea[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain Destructor\n";
}

void	Brain::SetIdeas(){
	for(int i = 0; i < 100;i++){
		idea[i] = "idea";
	}
}

std::string	Brain::GetIdeas(int i){
	if (idea[i].empty())
		return "khawia lqadia";
	return idea[i];
}

void    Brain::setidea(std::string s, int i){
	idea[i] = s;
}

