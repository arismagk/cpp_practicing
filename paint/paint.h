#ifndef PAINTH
#define PAINTH

#include <iostream>
using namespace std;

enum Pcolour { RED, WHITE, BLUE, ORANGE } ;


class Paint{
public:
	Pcolour get_colour(){ return colour; }
	//virtual void apply(){ std::cout << "Paint::apply\n"; }
    virtual void apply(){ std::cout << "Paint::apply\n"; }

protected:
	Paint(Pcolour k) : colour(k) { }
    

private:
	Pcolour colour;
};


class Lacquer : public Paint{
public:
	Lacquer(Pcolour k) : Paint(k) {}
	void apply(){ std::cout << "Lacquer::apply()\n"; 
      dry();
	}

protected:
	void dry(){ std::cout << "Lacquer::dry()\n"; }
};


class Latex : public Paint{
public:
	Latex(Pcolour k) : Paint(k) {}
	void apply(){ std::cout << "Latex::apply()\n"; }
};


class Varnish : public Paint{
public:
	Varnish(Pcolour k) : Paint(k) {}
	void apply(){ std::cout << "Varnish::apply()\n"; }
};

extern void do_the_paint(Paint *Array[], int count);

#endif
