#pragma once
class Rectangle
{
	double length;
	double width;

public:
	void setDimension(double length, double width);

	double getLength() const;
	double getWidth() const;

	double area() const;
	double perimeter() const;

	void print() const;

// Constructors:

	Rectangle();
	Rectangle(double l, double w);

// Destructor:
	~Rectangle();

};

