#pragma once
#include <string>

/*
	Casey Sorrells
	CSCI 272-6422
	Chapter 10 Assignment
	Due: 1-27-2019


	Problem Statement
	Build a program which will be able to keep track of the current day of the week, and then do calculations on that day.
	The program should be capable of telling the user what day of the week would fall any number of days ago,
	or days in the future, counting from the seed day.

	Solution
	Created a dayType class to handle all calculations on day of the week. Used a string array called dayOfWeek[] with 7 elements
	to store the actual names of the days of the week.
	Used an integer currentDay to store the seed day, implimented in the setDay() method, then used currentDay when referrencing the array: dayOfWeek[currentDay]
	Implimented two simple methods: dayInc() and dayDec() to iterate thru the days. The logic for rolling over to the begining of the week(sunday)
	when saturday was hit is implimented in each method. So currentDay always contains 0 thru 6, and if it is decrimented or incrimented past that range,
	it gets reset to the start of the week again.
	updateDay() houses the loop logic to allow any number of days to pass, using dayInc() or dayDec() to "step" thru the number of days. currentDay always ends
	up containing the target day because the program has literally counted one day at a time forward or backward in time until the specified number of
	days is reached.

*/

/*	UML type Diagram:
	
		dayType
.-------------------------------.
|	-int currentDay				|
|	-int numOfCycles			|
|	-string dayOfWeek[0-6]		|
|-------------------------------|
|	-void dayInc()				|
|	-void dayDec()				|
|	-void printDay()			|
|	+void setDay()				|
|	+string getDay()			|
|	+void updateDay()			|
|	+dayType()					|
|------------------------------*/

class dayType {
	int currentDay;
	int numOfCycles;
	std::string dayOfWeek[7];
	void dayInc();
	void dayDec();
	void printDay();
public:
	dayType();
	void setDay(int day);
	std::string getDay();
	void updateDay(int direction, int num_of_days); // direction 0: going into the past, 1: going into the future
};


