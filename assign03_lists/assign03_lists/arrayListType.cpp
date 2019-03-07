#include "arrayListType.h"
#include <iostream>


//constructor
arrayListType::arrayListType(int size) {
	if (size <= 0) {
		std::cout << "The array size must be positive.\nCreating an array of the default size(100 elements).\n";
		maxSize = 100;
	}
	else
		maxSize = size;
	length = 0;
	list = new int[maxSize];
}

//copy constructor
arrayListType::arrayListType(const arrayListType& otherList) {
	maxSize = otherList.maxSize;
	length = otherList.length;

	list = new int[maxSize]; // create the array

	for (int j = 0; j < length; j++)
		list[j] = otherList.list[j];
}

//destructor
arrayListType::~arrayListType() {
	delete[] list;
}

// return true is length is equal to zero
bool arrayListType::isEmpty() const {
	return (length == 0);
}

// return true if length equals maxSize
bool arrayListType::isFull() const {
	return (length == maxSize); 
}

// get current length of list
int arrayListType::listSize() const {
	return length;
}

// get maximum size of list
int arrayListType::maxListSize() const {
	return maxSize;
}

// output list elements on screen
void arrayListType::print() const {
	for (int i = 0; i < length; i++) // read data based on position in array
		std::cout << list[i] << " "; // output data
	std::cout << "\n"; // carriage return
}

// print out generic "out of range" msg on screen
void arrayListType::printOOR() const {
	std::cout << "Item location is out of range.\n";
}

bool arrayListType::isItemAtEqual(int location, int item) const {
	if (location < 0 || location >= length) { // if location points to something outside the list
		printOOR(); // print appropriate message
		return false;
	}
	else
		return (list[location] == item); // return true if list[location] is equal to number passed in, false if not
}

void arrayListType::removeAt(int location) {
	if (location < 0 || location >= length)
		printOOR(); // out of range
	else {
		for (int i = location; i < length - 1; i++) // starting at location to be removed, iterate thru each until last location is reached
			list[i] = list[i + 1]; // copy data from next location to this location
		length--; // shrink list length by 1
	}
}

void arrayListType::retrieveAt(int location, int& retItem) const {
	if (location < 0 || location >= length)
		printOOR();
	else
		retItem = list[location];
}

void arrayListType::clearList() {
	length = 0; // set length to zero
}