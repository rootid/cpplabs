#ifndef SHAPE_H
#define SHAPE_H

/**************************************************************
 *  
 * File: shape.h
 *
 * Description: Class Shape is defined in this class. shape.cpp
 *              has the implementation.
 *
 * Author: SciSpike
 *
 * Modification History:
 *
 ***************************************************************/
#include <iostream>

class Shape {
public:
	Shape( const int _x, const int _y );
    virtual ~Shape();

    virtual void move( int x, int y );
	inline int  getX() const;
	inline int  getY() const;

	// TODO: add operator<<, operator>> (must be friends)
	// TODO: add operator== (can be a friend or a member)

protected:
	int myX; 
	int myY; 
};

// inlined member functions

int Shape::getX() const {
	return( myX );
}

int Shape::getY() const {
	return( myY );
}

#endif // SHAPE_H