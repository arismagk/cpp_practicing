#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
using namespace std;

struct Rectangle
{
    int rwidth;
    int rheight;

    void init(int width, int height);
    inline int calculate_area(){ return rwidth * rheight;}    
};
#endif
