#include <algorithm>
#include <iostream>

#include "jewel.h"

void print_range(std::ostream& os, const Jewel r[], int size){
    using namespace std;

    os << size << ": ";
    for(int i{0}; i< size; ++i) os << r[i] << ' ';
    os << endl;
}

int main(){
    using namespace std;

    constexpr int N{100};
    Jewel v[N] = { Gem::Kind::Glass,     Gem::Kind::Glass,
                   Gem::Kind::Glass,     Gem::Kind::Ruby,
                   Gem::Kind::Emerald,   Gem::Kind::Sapphire,
                   Gem::Kind::Malachite, Gem::Kind::Citrin,
                   Gem::Kind::Diamond };
    cout << "Printing" << endl;
    print_range(cout, v, N);
return 0;

    cout << "Reversing" << endl;
    reverse(v, v+N);
    cout << "Printing" << endl;
    print_range(cout, v, N);

    cout << "Sorting" << endl;
    sort(v, v+N);
    cout << "Printing" << endl;
    print_range(cout, v, N);

    return 0;
}
