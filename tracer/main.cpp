#include "tracer.h"
#include <iostream>
#include <string>
using namespace::std;

// you could put a Tracer here
int globi = 0;
string tr2_id = "globi";
Tracer t1(tr2_id);

int func()
{
	// you could put a Tracer here
	return globi++;
}

int main()
{

	int loc = 0;
    string tr1_id = "loc";
	// you could put a Tracer here
    Tracer t2(tr1_id);

	while (loc < 3){
		// you could put a Tracer here
		loc = func();
        string tr3_id = "loc_while";
	    Tracer t3(tr3_id);
        
	}
	// you could put a Tracer here
    string tr4_id = "last";
	Tracer t4(tr4_id);
	return 0;
}
