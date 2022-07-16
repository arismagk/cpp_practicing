// file Typist.h

#ifndef TYPIST_H
#define TYPIST_H

#include "Person.h"

class Typist : public Person {
public:
	Typist( std::string name_, int age_,
	    std::string package_ ) :
		Person(name_,age_), package(package_) {}
	~Typist();
private:
	std::string package;
};

#endif 
