#include <iostream>

#include "rectangle.h"

int main()
{
    using namespace std;
    //Rectangle a, b;

    //a.init(10, 5);
    Rectangle a{10,5};
    //b.init(4, 12);
    Rectangle b{4,12};

    cout << "Total: " << a.area() + b.area() << "\n";

    return 0;
}
