#include "Circle.h"
 
// Date member function
Circle::Circle(double bk)
{
    bankinh = bk;
	pi = 3.14;
}
double Circle::dientich() {
    return bankinh*pi*pi;
}
