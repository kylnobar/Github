#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "CSLab5.h"


using namespace std;

int main() {

	int choice;
	//srand(time(NULL)); // randomize the seed for the rand() function so that the press any key msgs are different each time you run the program

	do {
		system("cls");
		choice = NULL;

		drawMenu(); // draw main menu
		cin >> choice;

		switch (choice) {
		case 1:                           // convert to inches
			convertToInches(inchCounter);
			break;
		case 2:                           // conver to centimeters
			convertToCentimeters(centCounter);
			break;
		case 3:
			//exit program by breaking to while condition
			break;
		default:
			inputError(0);
		}
		waitForUser();
	} while (choice != 3);

	return 0;
} 