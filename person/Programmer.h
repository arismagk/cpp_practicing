// file Programmer.h

#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Person.h"

class Programmer : public Person {
public:
	Programmer( std::string name_, int age_, 
	    std::string language_ ) : 
		Person(name_,age_), language(language_) {}
	~Programmer(){}
private:
	std::string language;
};
#endif
