#include <iostream>
#include <iomanip>
#include <fstream>

int main(int ac, char **av){
	if (ac == 4){
		std::string file_name = av[1], s1 = av[2],
			s2 = av[3], data, concat;
		std::ifstream main_file(file_name);
		if (main_file.is_open()){
			while (std::getline(main_file, concat))
				{data += concat + '\n';}
			main_file.close();
		}
		else
			return (0);
		size_t find;
			find = data.find(s1);
			while (find != std::string::npos){
				data.erase(find, s2.length());
				data.insert(find,s2);
				std::cout << data;
				find = data.find(s1);
			}
		std::ofstream Rfile(file_name + ".replace");
		if (Rfile.is_open()){
			Rfile << data;
			Rfile.close();
		}
		std::string test = "amine";
		find = test.find("z");
		std::cout << find;
	}
}
