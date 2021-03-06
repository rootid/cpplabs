#include "rectangle.h"
#include <iostream>
#include "point.h"

using namespace std;

Rectangle::Rectangle(int upperLeftX, int upperLeftY,
					 int loweRightX, int lowerRightY)
 : ShapeImplementation( Point(upperLeftX,upperLeftY), 
                        Point(loweRightX,lowerRightY) )
{
}

void Rectangle::paint() {
	// For now, "paint" by simply printing our location.
   cout << "Rectangle Paint Information..." << endl;
   printLocation();
}
