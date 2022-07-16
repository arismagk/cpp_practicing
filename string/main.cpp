#include <iostream>

#include "my_string.h"

int main(){
    my_string s("Hallo");

    s.print(); // send string to std::cout
    std::cout << (s.size() == 5) << '\n';

#if 1 // change to 0, then move line down as instructed
    my_string t(s);
#endif
}
