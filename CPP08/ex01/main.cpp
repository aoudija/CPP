#include "Span.hpp"

using std::cout;
using std::endl;

int main(){
    Span s(6);
    try{
        s.addNumber(2);
        s.addNumber(2);
        int tab[] = { 4, 70, 80 , 90, 91};
        s.fillSpan(tab, 5);
        cout << s.shortestSpan() << endl;
        cout << s.longestSpan() << endl;
    }
    catch(std::exception& e){
        cout << e.what() << endl;
    }
}
