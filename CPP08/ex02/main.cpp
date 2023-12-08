#include "MutantStack.hpp"

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <iterator>
using std::vector;

void f(){
    system("> l");
}

int main(){
    atexit(f);
    MutantStack<int> mystack;
    mystack.push(7);
    mystack.push(1);
    mystack.push(1902);
    MutantStack<int>::iterator it;
    for (it = mystack.begin();it < mystack.end();it++){
        cout << *it << endl;
    }
}

// int main(){
//     vector<int> mystack;
//     mystack.push_back(7);
//     mystack.push_back(1);
//     mystack.push_back(1902);
//     vector<int>::iterator it;
//     for (it = mystack.begin();it < mystack.end();it++){
//         cout << *it << endl;
//     }
// }

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }
