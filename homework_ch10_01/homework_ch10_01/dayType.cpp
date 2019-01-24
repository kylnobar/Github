#include "dayType.h"
#include <iostream>
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



dayType::dayType() {				// Constructor
	dayOfWeek[0] = "Sunday";
	dayOfWeek[1] = "Monday";
	dayOfWeek[2] = "Tuesday";
	dayOfWeek[3] = "Wednesday";
	dayOfWeek[4] = "Thursday";
	dayOfWeek[5] = "Friday";
	dayOfWeek[6] = "Saturday";

	currentDay = 1;
	numOfCycles = 1;
}

void dayType::setDay(int day)
{
	currentDay = day;
}

std::string dayType::getDay()
{
	return dayOfWeek[currentDay];
}

void dayType::dayInc()
{
	if (currentDay < 6) {			// make sure currentDay starts over at zero when 6 is reached.
		currentDay++;
	} else {
		currentDay = 0;
	}

	printDay();
}

void dayType::dayDec()
{
	if (currentDay > 0) {			// make sure currentDay doesn't go below zero.
		currentDay--;
	} else {
		currentDay = 6;
	}

	printDay();
}

void dayType::updateDay(int direction, int num_of_days) // direction is either 0: going into the past, or 1: going into the future
{
	if (direction == 1) {
		for (int i = 0; i < num_of_days; i++)
			dayInc();
	} else {
		for (int i = 0; i < num_of_days; i++)
			dayDec();
	}
	std::cin.ignore(INT_MAX, '\n');  // clear istream buffer so getline function won't be skipped when running
}

void dayType::printDay()
{
	std::cout << "\t" << numOfCycles << ". " << dayOfWeek[currentDay] << "\n";
	numOfCycles++;
	
}