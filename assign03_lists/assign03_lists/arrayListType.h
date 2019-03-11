#pragma once
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
class arrayListType
{

public:
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;

	
	int maxListSize() const; 
	// output items in list
	void print() const;
	// print "out of range" msg
	void printOOR() const; 
	// return true if data at location is equal to item passed in
	bool isItemAtEqual(int location, int item) const;

	virtual void insertAt(int location, int insertItem) = 0;
	virtual void insertEnd(int insertItem) = 0;
	void removeAt(int location);
	void retrieveAt(int location, int& retItem) const;
	virtual void replaceAt(int location, int repItem) = 0;
	void clearList();
	virtual int seqSearch(int searchItem) const = 0;
	virtual void remove(int removeItem) = 0;

	// Constructor.
	arrayListType(int size = 100);
	// copy Constructor.
	arrayListType(const arrayListType& otherList);

	virtual ~arrayListType();

protected:
	int *list;
	int length;
	int maxSize;
};

