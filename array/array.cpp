#include "array.h"


Array::Array(int length):elem{new int[length]}, sz{length}{}

int& Array::operator[](int index)
{
    if(index <0 || index>sz)
    {
        std::cerr<<"Invalid index"<<"\n";
    }
    return elem[index];
}


Array& Array::operator=(const Array& from)
{
    std::cout<<"Blocked!!!!!!"<<"\n";
    return *this;
}


int Array::size() const 
{
    return sz;
}

Array::Array(int length, int value)
{
    sz = length;
    elem = new int[length];
   std::fill_n(elem, length, value);
}

Array::~Array()
{
    delete [] elem;
}

 void Array::print_array(Array& a)
{
    for(int i=0; i<sz;i++)
    {
        std::cout<<a[i]<<"\n";
    }
}

Array::Array(const Array& a):sz{a.sz}
{

    elem = new int[sz];
    std::copy_n(a.elem, sz, elem);
}
