#include <iostream>
#include <string>
#include "dayType.h"

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


/*FUNCTION DECLARATIONS*/
void drawMenu(int menu, std::string curDayDisplay);
bool askToQuit();
void calculateDayOfWeek();


int main() 
{
	do {
		calculateDayOfWeek();
	} while (!askToQuit());

	return 0;
}

void calculateDayOfWeek() {
	int tempDay = 0;
	int tempNumOfDays = 0;
	int tempDirection = 1;

	dayType calcDay;
	calcDay.setDay(tempDay);

	drawMenu(1, calcDay.getDay()); 
	std::cout << "\n\t\tCHOOSE AN OPTION AND PRESS ENTER: ";
	std::cin >> tempDay;
	calcDay.setDay(tempDay);
	std::cout << "CURRENT DAY SET: " << calcDay.getDay() << ".\n\n";

	drawMenu(2, calcDay.getDay());
	std::cin >> tempDirection;
	std::cout << "\t\tHOW MANY DAYS DO YOU WISH TO COUNT? ENTER POSITIVE INTEGERS ONLY: ";
	std::cin >> tempNumOfDays;

	calcDay.updateDay(tempDirection, tempNumOfDays);

	std::string tempDirString = "";
	std::string tempPlurality = "";

	tempPlurality = " DAY "; // Default plurality
	if (tempNumOfDays > 1)
		tempPlurality = " DAYS ";

	tempDirString = "INTO THE FUTURE"; // Default direction of calculation
	if (tempDirection == 0)
		tempDirString = "INTO THE PAST";

	std::cout << "\n\n\t" << tempNumOfDays << tempPlurality << "FROM CURRENT DAY " << tempDirString << " RESULTS IN A " << calcDay.getDay();

}

bool askToQuit() {

	std::cout << "\n\n\tPRESS ENTER TO CONTINUE(ENTER \'Q\' TO QUIT): ";
	std::string response = "";
	std::getline(std::cin, response);
	return (response[0] == 'q') || (response[0] == 'Q');

}

void drawMenu(int menu, std::string curDayDisplay)
{

	system("cls");
	if (menu == 1) {
	std::cout << "\n\n\t<======================< CASEY'S AWESOME SAUCE DAY OF THE WEEK CALCULATOR! >======================>\n"
		<< "\n\t\t\t\t\t\tCURRENT DAY: " << curDayDisplay << "\n\n\n"
		<< "\t\tPLEASE SELECT THE CURRENT DAY OF THE WEEK:\n\n"
		<< "\t\t0 - SUNDAY\n\n\t\t1 - MONDAY\n\n\t\t2 - TUESDAY\n\n\t\t3 - WEDNESDAY\n\n\t\t4 - THURSDAY\n\n\t\t5 - FRIDAY\n\n\t\t6 - SATURDAY\n\n\n";
	}

	else if (menu == 2) {
	std::cout << "\n\n\t<======================< CASEY'S AWESOME SAUCE DAY OF THE WEEK CALCULATOR! >======================>\n"
		<< "\n\t\t\t\t\t\tCURRENT DAY: " << curDayDisplay << "\n\n\n"
		<< "\t\tCALCULATE INTO THE FUTURE OR THE PAST?\n\n"
		<< "\t\t0 - PAST\n\n\t\t1 - FUTURE\n\n"
		<< "\t\tENTER 0 OR 1: ";
	}

}
