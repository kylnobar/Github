#include "unorderedArrayListType.h"
#include <iostream>

/*
	Casey Sorrells
	CSCI 272-6422
	Chapter 12 Assignment

	Problem Statement
	create a dynamic list that can shrink and expand when we need to remove or add items to it.

	Solution
	impliment arrayListType as a basis for a list that can grow or shrink. Then experiment with unorderedArrayListType
	that is derived from arrayListType. After that, impliment unordered list in a different way to allow it to be sorted
	automatically as numbers are added to it or removed from it, call that the orderedArrayListType.
	Finally, finish learning to code and profit.
*/

// Constructor
unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size)
{

}


void unorderedArrayListType::insertAt(int location, int insertItem) {
	if (location < 0 || location >= maxSize)
		printOOR(); // print "out of range" msg on screen
	else if (length >= maxSize) //list is full
		std::cout << "Cannot insert in a full list.\n";
	else {
		for (int i = length; i > location; i--)
			list[i] = list[i - 1]; //shift elements up to make room for new element
		list[location] = insertItem; //insert the item at the specified position
		length++; //increment the length
	}
}

void unorderedArrayListType::insertEnd(int insertItem) {
	if (length >= maxSize) //the list is full
		std::cout << "Cannot insert in a full list.\n";
	else {
		list[length] = insertItem; //insert the item at the end
		length++; //increment the length
	}
}

int unorderedArrayListType::seqSearch(int searchItem) const {
	int loc;
	//bool found = false;					//My version of search doesn't require found boolean

	loc = 0; //search placeholder

//-=-=-=-=-=-=-=-=- BELOW IS MY IMPROVED VERSION -=-=-=-=-=-=-=-=-=-
	while (loc < length)				//execute until end of list is reached
		if (list[loc] == searchItem)	//if current item is equivalent to searchItem
			return loc;					//Item found, return placeholder escape the while loop
		else
			loc++;						//Item not found yet, increment search placeholder

	// if execution reaches this line, nothing was found & list has been searched completely
	return -1;							//nothing found, return -1

//-=-=-=-=-=-=-=-=- BELOW IS TEXT BOOK IMPLIMENTATION OF SEARCH -=-=-=-=-=-=-=-=-=-=-
/*
	while (loc < length && !found)		//execute until either searchItem is found, or we reach the end of the list
		if (list[loc] == searchItem)	//if current item in list is equivalent to searchItem
			found = true;				//found item!
		else
			loc++;						// didn't find item, increment placeholder

	if (found)							// if we found the item
		return loc;						// return the location of found item
	else
		return -1;						// if nothing was found, return -1
*/
}

void unorderedArrayListType::remove(int removeItem) {
	int loc;

	if (length == 0)
		std::cout << "Cannot delete from an emptry list.\n";
	else {
		loc = seqSearch(removeItem); // search list for item to be removed and assign loc integer to it's location

		if (loc != -1) // if result isn't "not found"
			removeAt(loc);
		else
			std::cout << "The item to be deleted is not in the list.\n";
	}
}

void unorderedArrayListType::replaceAt(int location, int repItem) {
	if (location < 0 || location >= length)
		printOOR(); // print "out of range" msg on screen
	else
		list[location] = repItem;
}