#include "tracer.h"

Tracer::Tracer(string s)
{
    tracer_id = s;
    ++counter;
    for(int local_counter = 0; local_counter<=counter;local_counter++)
    {
        cout<<" ";
    }
    cout<<"<"<<tracer_id<<"\n";
}

Tracer::~Tracer()
{
     for(int local_counter = 0; local_counter<=counter;local_counter++)
    {
        cout<<" ";
    }
    cout <<">"<<tracer_id<<"\n";
}
int Tracer::counter;
