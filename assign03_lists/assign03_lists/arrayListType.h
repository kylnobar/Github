#pragma once

class arrayListType
{

public:
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;

	// get maximum size of list
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

