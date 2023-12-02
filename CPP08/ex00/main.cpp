#include "easyfind.hpp"
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;

int main(){

    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    try {
        if (!vec.empty())
            easyfind(vec, 1);
    }
    catch(const char* a){
        cout << a << endl;
    }
}

