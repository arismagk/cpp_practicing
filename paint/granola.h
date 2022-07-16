#include <iostream>
#include "paint.h"
using namespace std;

class Granola : public Paint{
public:
	Granola(Pcolour k) : Paint(k) {}
	void apply(){ std::cout << "Granola::apply()\n"; }
};