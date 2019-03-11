// refer to page 869 in text book as well as page 899 for instructions.
#include "arrayListType.h"
#include "unorderedArrayListType.h"
#include "orderedArrayListType.h"
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

using namespace std;

int main() {

#pragma region unorderedList

	unorderedArrayListType intList(100);

	int number; // temp var for manipulation of list
	int count;  // how long the list should be

	cout << "How long should the list be?(number of integers) ";
	cin >> count;

	cout << "List 3: Enter " << count << " integers: ";


	for (int i = 0; i < count; i++) {
		cin >> number;
		intList.insertEnd(number);
	}

	cout << endl;
	cout << "Line 8: intList: ";
	intList.print();
	cout << endl;

	cout << "Line 11: Enter the number to be deleted: ";
	cin >> number;
	cout << endl;

	intList.remove(number);

	cout << "Line 15: After removing " << number << " intList: ";
	intList.print();
	cout << endl;

	cout << "Line 18: Enter the search item: ";
	cin >> number;
	cout << endl;

	if (intList.seqSearch(number) != -1)
		cout << "Line 22: " << number << " found in intList.\n\n";
	else
		cout << "Line 24: " << number << " is not in intList.\n\n";
#pragma endregion

#pragma region OrderedList

	cout << "\n\nNow we shall take the unordered list and make an ordered list out of it:\n\n";

	orderedArrayListType intOrdList(25);

	int tempNumber; // temporary number to hold intList value long enough to transfer it to intOrdList

	for (int i = 0; i < intList.listSize(); i++) {
		intList.retrieveAt(i, tempNumber);
		intOrdList.insert(tempNumber);
	}

	intOrdList.print();
	cout << endl;

	// reuse number from begining of main function
	cout << "Enter number to be deleted: ";
	cin >> number;

	intOrdList.remove(number);

	cout << "Now list reads:\n";
	intOrdList.print();
	cout << "\n\n";

	cout << "Enter search item: ";
	cin >> number;

	if (intOrdList.seqSearch(number) != -1)
		cout << number << " found in intOrdList.\n\n";
	else
		cout << number << " is not in intOrdList.\n\n";
#pragma endregion

	system("pause");
	return 0;
}