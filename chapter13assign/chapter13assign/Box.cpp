#include <iostream>
#include "Box.h"


void Box::setDimention(double h, double w, double l) {

	Rectangle::setDimension(l, w);

	if (h >= 0)
		height = h;
	else
		height = 0;
}

double Box::getHeight() const {}

double Box::area() const {}

double Box::volume() const {}

void Box::print() const {

	Rectangle::print();
	std::cout << "; Height = " << height;
}

Box::Box() {}

Box::~Box() {}
