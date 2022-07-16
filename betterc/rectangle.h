#include <iostream>
using namespace std;

struct Rectangle
{
    int rwidth;
    int rheight;
    int area;

    void init(int width, int height);
    inline int calculate_area(){ return area = rwidth * rheight;}    
};

