#include <iostream>
#include <iomanip>
#include <fstream>

int main(int ac, char **av){
    if (ac == 4){
		std::string fn = av[1];
        std::string s1(av[2]);
        std::string s2(av[3]);
        std::ifstream infile(fn);
        std::string line, concat;
		std::getline(infile, line);
        if (infile.is_open()){
			while(1){
				concat += line + '\n';
				if (!std::getline(infile, line))
					break;
			}
			infile.close();
			int i,j,f;
			i = j = 0;
			while (concat[i]){
				if (concat.find(s1,i) != concat.npos)
				{
					f = concat.find(s1,i);
					j = 0;
					while (j < (int)s2.length()){
						concat[f] = s2[j];
						j++;
						f++;
					}
					i = f - 1;
				}
				i++;
			}
			std::ofstream outfile(fn + ".replace");
			if (outfile.is_open()){
				outfile << concat;
				outfile.close();
			}
        }
    }
}
