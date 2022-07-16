#ifndef TRACER_H_
#define TRACER_H_
#include <iostream>
#include <string>
using namespace::std;
/* The tracer class */


class Tracer {

    public:
        Tracer(string s);
        ~Tracer();
        
    private:
        string tracer_id;
        static int counter;
        

};

#endif
