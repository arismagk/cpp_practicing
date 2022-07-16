#include <iostream>
using namespace std;

#include "smartpointer.h"

int main()
{
	SmartPointer p1;
	string word("hello world");
	SmartPointer p2 = &word;

	cout << *p2 << endl;	// OK
	cout << *p1 << endl;
		// wrong, p1 does not point to string

	p1 = p2;

	cout << *p1 << endl;
		// now OK

	return 0;
}
