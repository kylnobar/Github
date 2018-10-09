#pragma once
using namespace std;

//VARIABLE DECLARATIONS:
const double MAKEINCHES = .3937;
const double MAKECENTIMETERS = 2.54;
int inchCounter = 0;
int centCounter = 0;
string line;
int timesPaused = 0;


string funPrompt[] = {  // Who wants the same boring pause msg every time? Not me!
	"There is no \"any\" key, press ENTER to continue...",
	"Whoa, that was rough. Mash dat ENTER key to continue...",
	"Oh my brain! Delicately tap ENTER to make it stop...",
	"That was soooo easy, lets do a harder one...[Press ENTER]",
	"What the heck was that??? Moving on...[Press ENTER]",
	"Can we do something else now???[Press Enter]",
	"That was fun, well, not really, but it probably made you happy...[Press ENTER]",
	"I'm bored...[Press Enter]",
	"NEED MORE INPUT! [Press ENTER]",
	"INVALID IN----just kidding...[Press ENTER]",
	"Did you know that cin leaves the \'\\n\' in the input stream? [Press ENTER]",
	"Press ENTER to continue...",
	"Give me some of that Carriage Return goodness!! [Press Enter]",
	"C++ was originally called \'The New C\' [Press ENTER]",
	"C++ was designed by Bjarne Stroustrup, who's name is impossible to pronounce...[Press ENTER]"
};

//FUNCTION PROTOTYPS:
void inputError(int currentMenu);
void drawMenu();
void convertToInches(int &count);
void convertToCentimeters(int &count);
void waitForUser();

//========================================================< INPUT ERROR >===========================================================>

void inputError(int currentMenu) { 
	
	cin.clear();
	cin.ignore(INT_MAX, '\n');
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
	double tempInput = NULL;                        // temp variable used for testing the input
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
	waitForUser();
}

//================================================< INCHES ---> CENTIMETERS >=================================================>

void convertToCentimeters(int& count) {
	double tempInput = NULL;                       // temp variable used for testing the input
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
	waitForUser();
}

//========================================================< PAUSE PROGRAM >===========================================================>

void waitForUser() {  // pause the program
	if (timesPaused >= 1) {
		timesPaused = 0;
		return;
	}
	else {
		cin.ignore();
		cout << "\t\t\t" << funPrompt[rand() % 15];
		getline(cin, line);
		line = "";
		timesPaused++;
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
