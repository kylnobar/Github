#include <iostream>
#include "CSLab5.h"


using namespace std;

int main() {

	int choice;

	do {
		system("cls");
		choice = NULL;

		drawMenu(); // draw main menu
		cin >> choice;

		switch (choice) {
		case 1:                           
			convertToInches(inchCounter);
			break;
		case 2:                           
			convertToCentimeters(centCounter); 
			break;
		case 3:
			//exit program by breaking to while condition
			break;
		default:
			inputError(0);
		}

		cout << "\t\t\t";
		system("pause");

	} while (choice != 3);

	return 0;
} 