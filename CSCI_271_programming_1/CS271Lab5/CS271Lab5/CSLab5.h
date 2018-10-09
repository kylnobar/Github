#pragma once
using namespace std;

//VARIABLE DECLARATIONS:
const double MAKEINCHES = .3937;
const double MAKECENTIMETERS = 2.54;
int inchCounter = 0;
int centCounter = 0;

//FUNCTION PROTOTYPS:
void inputError(int currentMenu);
void drawMenu();
void convertToInches(int &count);
void convertToCentimeters(int &count);

//========================================================< INPUT ERROR >===========================================================>

void inputError(int currentMenu) { 
	
	cin.clear(); // resets istream from "fail" status so that more input can be read.
	cin.ignore(INT_MAX, '\n'); // ignore everything that was in the istream up to the last carriage return
	cout << "\n\t\t\tINVALID ENTRY, PLEASE TRY AGAIN." << endl;
		
	if (currentMenu == 1) { 
		convertToInches(inchCounter);
	}
	else if (currentMenu == 2) {
		convertToCentimeters(centCounter);
	}
	
}

//======================================================< CENTIMETERS ---> INCHES >=================================================>

void convertToInches(int& count) {

	double tempInput = NULL; // temp variable used for testing the input
	cout << "\t\t\tENTER CENTIMETERS: ";

	if (!(cin >> tempInput)) {
		inputError(1);
	}
	else {
		if (tempInput == 1) {
			cout << "\n\t\t\t" << tempInput << " CENTIMETER EQUALS ";
		}
		else {
			cout << "\n\t\t\t" << tempInput << " CENTIMETERS EQUALS ";
		}
		cout << tempInput * MAKEINCHES << " INCHES." << endl << endl;
		count++;
	}

}

//=======================================================< INCHES ---> CENTIMETERS >=================================================>

void convertToCentimeters(int& count) {

	double tempInput = NULL; // temp variable used for testing the input
	cout << "\t\t\tENTER INCHES: ";

	if (!(cin >> tempInput)) {
		inputError(2);
	}
	else {
		if (tempInput == 1) {
			cout << "\n\t\t\t" << tempInput << " INCH EQUALS ";
		}
		else {
			cout << "\n\t\t\t" << tempInput << " INCHES EQUALS ";
		}
		cout << tempInput * MAKECENTIMETERS << " CENTIMETERS." << endl << endl;
		count++;
	}
	
}

//========================================================< DRAW MAIN MENU >===========================================================>

void drawMenu() {

	cout << "\n\t\t\t<================= MEASUREMENT CONVERTER =================>\n\n"
		<< "\t\t\t\t\t\t\t\tMEASUREMENTS\n\t\t\t\t\t\t\t\tCONVERTED:" << "\n\n"
		<< "\t\t\t 1) CENTIMETERS  --->  INCHES\t\t" << "[" << inchCounter << "]" << "\n\n"
		<< "\t\t\t 2) CENTIMETERS  <---  INCHES\t\t" << "[" << centCounter << "]" << "\n\n"
		<< "\t\t\t 3) EXIT PROGRAM\n\n\n"
		<< "\t\t\tMAIN MENU: ";
}
