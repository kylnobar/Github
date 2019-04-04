#pragma once
#include "Rectangle.h"
class Box : public Rectangle
{
	double height;
public:
	void setDimention(double hight, double width, double length);
	double getHeight() const;
	double area() const;
	double volume() const;
	void print() const;

	Box();
	Box(double hight, double width, double length);
	~Box();
};

