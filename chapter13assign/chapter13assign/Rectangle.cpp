#include <iostream>
#include "Rectangle.h"
#include "Box.h"



void Rectangle::setDimension(double l, double w) {

	if (l >= 0)
		length = l;
	else
		length = 0;

	if (w >= 0)
		width = w;
	else
		width = 0;

}

double Rectangle::getLength() const		{ return length; }

double Rectangle::getWidth() const		{ return width; }

double Rectangle::area() const			{ return length * width; }

double Rectangle::perimeter() const		{ return 2 * (length * width); }

void Rectangle::print() const
{
	std::cout << "Length = " << length
		<< "; Width = " << width;
}

// Constructors
Rectangle::Rectangle()
{
	// Default values of length and width
	setDimension(0, 0);
}

Rectangle::Rectangle(double l, double w) { setDimension(l, w); }

// Destructor
Rectangle::~Rectangle() {}