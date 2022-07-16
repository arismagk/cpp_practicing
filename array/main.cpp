#include <iostream>
#include "array.h"

void dump(Array& a){
    std::cout << a.size() << ": ";
    for(int i=0; i<a.size(); ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    using namespace std;
    Array a(5,10);

     Array row{10, 0};
     // 10 integers, initialised to 0

    for(int i=0; i<10; ++i) {
        row[i] = 10 - i;
    }
    dump(a);

    Array acopy{a};
    dump(a);

    Array some{12, 16};
    dump(a);
    some = row;
    dump(a);
    
#if 0
    // const objects
    const Array crow{row};
    cout << crow[3] << '\n';

    dump(crow);

    // move semantics
    Array c(3, 33);
    Array d(4, 44);
    dump(c);
    dump(d);
    cout << string(40, '=') << endl;
    swap(c, d);
    dump(c);
    dump(d);

#endif
    return 0;

}
