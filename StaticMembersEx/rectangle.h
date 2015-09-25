#ifndef RECTANGLE_H
#define RECTANGLE_H

/**************************************************************
 *  
 * File: rectangle.h
 *
 * Description: Class Rectangle is defined in this class. 
 *              rectangle.cpp has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/

/* Include Files */
#include "shape.h"

/* Pre-Declarations */

/* Constants and defines */

/****************************************************************
 *
 * Description: A Rectangle is four straight line with ends 
 *              joined together at right angles between adjacent
 *              lines. 
 *
 * Exceptions: None
 *
 ***************************************************************/

class Rectangle : public Shape
{
public:
	// Constructor
	Rectangle( const int height, const int width,
		       const int x, const int y );
	// Destructor
    virtual ~Rectangle();

	virtual void draw() const;

	inline int   getWidth() const;
	inline int   getHeight() const;

	//TODO add functin static int getNoOfRectangleInstances();
	//TODO add function static int getNoOfDeletedRectangleInstances();

private:
	int myHeight; // Height of the Rectangle
	int myWidth; // Width of the Rectangle

	// Static information about how many Rectangles were created
	// TODO Add an int as static noOfRectangleInstances; 
	// Static information about how many Rectangles were deleted
	// TODO Add an int as static noOfDeletedRectangleInstances;
};

/****************************************************************
 *
 * Description: Get the Width of the Rectangle
 *
 * Returns: Width
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getWidth() const
{
   return( myWidth);
}

/****************************************************************
 *
 * Description: Get the Height of the Rectangle
 *
 * Returns: Height
 *
 * Pre-Conditions: None
 * 
 * Post Conditions: None
 *
 * Exceptions: None
 *
 ***************************************************************/

int Rectangle::getHeight() const
{
   return( myHeight);
}

#endif // RECTANGLE_H