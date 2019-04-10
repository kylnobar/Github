#include <iostream>
#include "Box.h"
#include "Rectangle.h"


void Box::setDimention(double h, double w, double l) {

	Rectangle::setDimension(l, w);

	if (h >= 0)
		height = h;
	else
		height = 0.0;
}

double Box::getHeight() const { return height; }

double Box::area() const { return 2 * (getLength() * getWidth() + getLength() * height	+ getWidth() * height); }

double Box::volume() const { return Rectangle::area() * height; }

void Box::print() const {

	Rectangle::print();
	std::cout << "; Height = " << height;
}

// Constructors
Box::Box() { height = 0.0; }

Box::Box(double l, double w, double h) : Rectangle(l, w) {

	if (h >= 0)
		height = h;
	else
		height = 0.0;
}

Box::~Box() {}

Box operator+(const Box & firstBox, Box & secondBox)
{
	Box tempBox;
	tempBox.height = firstBox.height + secondBox.height;
	tempBox.length = firstBox.length + secondBox.length;
	tempBox.width = firstBox.width + secondBox.width;
	return tempBox;
}
