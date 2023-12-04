#include "easyfind.hpp"
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;

int main(){
    int ar[] = {5,6,8};
    std::vector<int> vec(ar, ar + 3);

    try {
        if (!vec.empty())
            easyfind(vec, 6);
    }
    catch(const char* a){
        cout << a << endl;
    }
}

