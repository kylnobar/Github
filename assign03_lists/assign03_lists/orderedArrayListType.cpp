#include "orderedArrayListType.h"
#include "arrayListType.h"
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

orderedArrayListType::orderedArrayListType(int size)
{
}

void orderedArrayListType::insert(int insertItem) {
	if (length == 0) //List is empty
		list[length++] = insertItem; //insert insertItem and increment length
	else if (length == maxSize)
		std::cout << "Cannot insert in a full list.\n";
	else {
					//Find the location in the list where to insert insertItem
		int loc;
		//bool found = false;  // <----- author smoking wacky tobacky thinking we need a found boolean all the time...

		for (loc = 0; loc < length; loc++) {
			if (list[loc] >= insertItem) {
				//found = true;  // <------- why?
				break;
			}
		}

		for (int i = length; i > loc; i--)
			list[i] = list[i - 1]; // move the elements down

		list[loc] = insertItem;
		length++;
	}
}

void orderedArrayListType::insertAt(int location, int insertItem) {
	insert(insertItem); // An ordered list shouldn't care where you try to insert something at, it is sorted automagically!
}
void orderedArrayListType::insertEnd(int insertItem) {
	insert(insertItem); // again, we cannot allow items to be placed manually in an ordered list.
}
void orderedArrayListType::replaceAt(int location, int repItem) {
	// this one took me a second to think how to impliment, here's my idea:
	remove(location); // first we remove the item being replaced
	insert(repItem); // then we insert as usual. repItem will find it's way into the proper position with previously implimented code.
}
int orderedArrayListType::seqSearch(int searchItem) const {
	int loc;
	loc = 0; //search placeholder

	while (loc < length)				//execute until end of list is reached
		if (list[loc] == searchItem)	//if current item is equivalent to searchItem
			return loc;					//Item found, return placeholder escape the while loop
		else
			loc++;						//Item not found yet, increment search placeholder

	// if execution reaches this line, nothing was found & list has been searched completely
	return -1;
}
void orderedArrayListType::remove(int removeItem) {
	int loc;

	if (length == 0)
		std::cout << "Cannot delete from an emptry list.\n";
	else {
		loc = seqSearch(removeItem);
		if (loc != -1)
			removeAt(loc);
		else
			std::cout << "The item to be deleted is not in the list.\n";
	}
}