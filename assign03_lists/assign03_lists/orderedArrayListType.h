#pragma once
#include "arrayListType.h"
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
class orderedArrayListType :
	public arrayListType
{
public:
	void insertAt(int location, int insertItem);
	void insertEnd(int insertItem);
	void replaceAt(int location, int repItem);
	int seqSearch(int searchItem) const;
	void insert(int insertItem);
	void remove(int removeItem);

	// Constructor
	orderedArrayListType(int size = 100);
};

