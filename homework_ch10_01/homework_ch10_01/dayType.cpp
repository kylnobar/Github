#include "dayType.h"
#include <iostream>
#include <string>


dayType::dayType() {				// Constructor
	dayOfWeek[0] = "Sunday";
	dayOfWeek[1] = "Monday";
	dayOfWeek[2] = "Tuesday";
	dayOfWeek[3] = "Wednesday";
	dayOfWeek[4] = "Thursday";
	dayOfWeek[5] = "Friday";
	dayOfWeek[6] = "Saturday";

	currentDay = 0;
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
	if (currentDay > 5) {			// make sure currentDay starts over at zero when 6 is reached.
		currentDay = 0;
	} else {
		currentDay++;
	}
}

void dayType::dayDec()
{
	if (currentDay < 1) {			// make sure currentDay doesn't go below zero.
		currentDay = 6;
	} else {
		currentDay--;
	}
}

void dayType::updateDay(bool incriment, int num_of_days)
{
	if (incriment == true) {
		for (int i = 0; i <= num_of_days; i++)
			dayInc();
	} else {
		for (int i = 0; i <= num_of_days; i++)
			dayDec();
	}
}

void dayType::printDay()
{
	
	
}