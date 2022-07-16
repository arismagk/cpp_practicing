#include <iostream>
using namespace std;

#include "array.h"

int main()
{
	Array row(10, 0);
	row.read(cin);
	row.print(cout);
	return 0;
}
