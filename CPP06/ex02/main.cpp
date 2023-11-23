#include "Base.hpp"

int main(){
    Base *p = generate();
    Base& pref = *p;
    identify(p);
    identify(pref);
}
