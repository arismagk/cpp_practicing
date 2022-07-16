#include <fstream>
#include <iostream>

#include "Person.h"
#include "Swimmer.h"
#include "Programmer.h"
#include "Typist.h"

using namespace std;

int main()
{

        Person p("Henry", 70);
        cout << p;

#if 0
	Person* people[4];
	people[0] = new Person("Henry", 70);
	people[1] = new Swimmer("Erica", 55, Swimmer::C);
	people[2] = new Programmer("Bjarne", 40, "C++");
	people[3] = new Typist("William", 60, "WordStar");

	ofstream file("database");
	for(int i=0; i<4; ++i) {
		file << *people[i] << endl;
	}
#endif

}
