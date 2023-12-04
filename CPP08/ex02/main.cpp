#include "MutantStack.hpp"

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <iterator>

// int main(){
//     MutantStack<int> mystack;
//     mystack.push(7);
//     mystack.push(1);
//     mystack.push(1902);
//     MutantStack<int>::iterator it = mystack.begin();
//     cout << *it << endl;
//     cout << *++it << endl;
//     cout << *++it << endl;
// }

int main()
{
    MutantStack<int, std::vector<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
    MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
    return 0;
}
