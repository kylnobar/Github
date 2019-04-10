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

// Non-member Operator Overloads
	// Relational Operators
		friend Box operator+(const Box&, Box&);
		friend Box operator-(const Box&, Box&);
		friend Box operator*(const Box&, Box&);
		friend Box operator==(const Box&, Box&);
		friend Box operator!=(const Box&, Box&);
		friend Box operator<=(const Box&, Box&);
		friend Box operator<(const Box&, Box&);
		friend Box operator>=(const Box&, Box&);
		friend Box operator>(const Box&, Box&);
	// Increment and Decrement Operators
		friend Box operator++(Box&);
		friend Box operator--(Box&);
		friend Box operator++(Box&, int);
		friend Box operator--(Box&, int);
	// IOstream Operators
		friend std::ostream& operator<<(std::ostream&, const Box&);
		friend std::istream& operator>>(std::ostream&, const Box&);

	// Constructors
	Box();
	Box(double hight, double width, double length);

	// Destructor
	~Box();
};

