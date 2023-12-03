#include "Span.hpp"

using std::cout;
using std::endl;

int main(){
    Span s(5);
    try{
        s.addNumber(2);
        s.addNumber(-1);
        int tab[] = {2, 3, 4};
        s.fillSpan(tab, 3);
        // s.printSpan();
        // s.addNumber(-1);
        // s.addNumber(7);
        // s.addNumber(-1);
        // s.addNumber(-1);
        cout << s.shortestSpan() << endl;
        cout << s.longestSpan() << endl;
    }
    catch(const char* a){
        cout << a << endl;
    }
}
