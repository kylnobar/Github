#include <iostream>
#include <string>
#include "dayType.h"

void drawMenu();

int main() 
{
	// set current day of the week to whatever it might be
		// create variable for this, should go in the constructor of dayType class
	/*
	Design and implement a class dayType that implements the day of the week in a program. 
	The class dayType should store the day, such as Sun for Sunday. 
	The program should be able to perform the following operations on an object of type dayType:

	Set the day.

	Print the day.

	Return the day.

	Return the next day.

	Return the previous day.

	Calculate and return the day by adding certain days to the current day. For example, if the current day is Monday and we add 4 days, 
	the day to be returned is Friday. Similarly, if today is Tuesday and we add 13 days, the day to be returned is Monday.

	Add the appropriate constructors and call the methods to test the class.
	*/
	drawMenu();

	dayType gayDay;
	gayDay.setDay(1);
	gayDay.updateDay(true, 35);
	std::cout << "\n\n" << gayDay.getDay() << "\n\n";

	system("pause");
	return 0;
}

void drawMenu()
{
	std::cout << "\t\n\n<====================< CASEY'S AWESOME SAUCE DAY OF THE WEEK CALCULATOR! >===========================\n\n\n\n"
		<< "\t\tPLEASE SELECT THE CURRENT DAY OF THE WEEK:\n\n"
		<< "\t\t0 - SUNDAY\n\n\t\t1 - MONDAY\n\n\t\t2 - TUESDAY\n\n\t\t3 - WEDNESDAY\n\n\t\t4 - THURSDAY\n\n\t\t5 - FRIDAY\n\n\t\t6 - SATURDAY\n\n\n"
		<< "\tWHAT DAY OF THE WEEK IS IT?\n\tENTER 0-6 AND PRESS ENTER: ";
}
