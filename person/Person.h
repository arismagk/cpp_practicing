#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
public:
	Person() : name(""), age(0) {}
	Person( std::string name_, int age_ ) :
		name(name_), age(age_) {}
	~Person() {}
private:
	std::string name;
	int age;
};
#endif
