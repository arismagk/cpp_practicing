#include "rectangle.h"

Rectangle::Rectangle(int h, int w):ht{h},wd{w}
{

}

int Rectangle::area() const
{
    return ht * wd;
}
