// file Swimmer.h

#ifndef SWIMMER_H
#define SWIMMER_H
#include "Person.h"

class Swimmer : public Person {
public:
	// certificate levels:
	enum certificate { A, B, C, D, E, F };
	Swimmer();
	Swimmer( std::string name_, int age_,
		certificate diploma_ );
	~Swimmer();
private:
	certificate diploma;
};
#endif
