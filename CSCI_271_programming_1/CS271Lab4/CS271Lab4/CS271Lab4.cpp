#include <iostream>
#include <iomanip>

using namespace std;

//declare variables (global isn't great, but I am not sure of a better way at this point)

int menuChoice = 0;
int score = 0;
double GPA = 0;
int workingMenu = 0; // track what menu we're in: main = 0, score = 1, gpa = 2


void inputError() {
	cout << "\n\tINVALID INPUT, PLEASE TRY AGAIN: ";
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	switch (workingMenu) {  // recursively call the inputError() method again if the input still isn't acceptable, otherwise, assign to correct variable and move on.
	case 0:
		if (!(cin >> menuChoice))
			inputError();
		break;
	case 1:
		if (!(cin >> score))
			inputError();
		break;
	case 2:
		if (!(cin >> GPA))
			inputError();
		break;
	}
}

void drawMenu(int currentMenu) {

	switch (currentMenu)
	{
	case 0:
		workingMenu = 0;
		system("CLS");
		cout << "\n<===================< MENU OPTIONS: >======================>\n\n\n"
			<< "\t1. ENTER YOUR TEST SCORE\n\n"
			<< "\t2. ENTER YOUR GPA\n\n"
			<< "\t3. EXIT PROGRAM\n\n\n\n"
   		    << "\tPLEASE MAKE A SELECTION: ";
		break;

	case 1:
		workingMenu = 1;
		system("CLS");
		cout << "\n>--------------------< SCORE MENU: >-----------------------<\n\n\n"
			 << "\tVALID INPUT:\n\n"
			 << right << setw(29) << "90-100 = A\n"
					  << setw(29) << "80-89 = B\n"
					  << setw(29) << "70-79 = C\n"
					  << setw(29) << "60-69 = D\n"
					  << setw(29) << "0-59 = F\n"

			 << "\n\t(OR ENTER \"-1\" TO GO BACK)\n" << "\n"

			 << "\tENTER YOUR TEST SCORE: ";
		break;

	case 2:
		workingMenu = 2;
		system("CLS");
		cout << "\n>--------------------< GPA MENU: >-------------------------<\n\n\n"
			<< "\tVALID GPAs:\n\n"
			<< "\tANY NUMBER 0 TO 4.00.\n"
			<< "\tEVERYTHING ELSE IS INVALID.\n\n\n"
			<< "\t(ENTER \"-1\" TO GO BACK)\n\n"
			<< "\tENTER YOUR GPA, AND I WILL TELL YOU IF YOU MADE\n\tTHE DEAN'S LIST.\n\n\n\tENTER YOUR GPA: ";
		break;
	}
}//drawMenu()


void computeScore(int &score) { // passing score by referrence because inputError() needs to be able to change the original variable to work properly

	if (!(cin >> score) || score < -1) {
		inputError();
	}

	if (score > 100) {
		cout << "\n\nDID YOU GET EXTRA CREDIT? HOW DOES ONE DO BETTER THAN 100%?\n\n";

	}
	else if (score >= 60 && score <= 100) {
		cout << "\n\nCONGRATULATIONS, YOU PASSED WITH ";

		switch (score / 10) {
		case 10:
			cout << "A PERFECT SCORE!  WAY TO GO!\n\n";
			break;
		case 9:
			cout << "AN A!  YOU CRUSHED IT!\n\n";
			break;
		case 8:
			cout << "A B!  YOU DID WELL!\n\n";
			break;
		case 7:
			cout << "A C!  Cs GET DEGREES!\n\n";
			break;
		case 6:
			cout << "A D.  YOU CAN DO BETTER.\n\n";
			break;
		}
	}
	else if (score < 60 && score >= 0) {
		cout << "\n\nYOU FAILED SO HARD! CAN YOU PASS/NO PASS???\n\n";
	}
	else if (score == -1)
		return;

	system("pause");

}//computeScore()

void computeGPA(double &GPA) { // passing GPA by referrence because the function inputError() needs to be able to change the original variable to work properly
	if (!(cin >> GPA) || GPA < -1 || GPA > 4) {
		inputError();
	}

	if (GPA == -1)
		return;

	if (GPA < 3.9) {
		cout << "I'M SORRY, BUT YOU DIDN'T MAKE THE DEAN'S LIST.\n\n";
	}
	else if (GPA >= 3.9 && GPA <= 4) {
		cout << "YOU MADE THE DEAN'S LIST! CONGRATULATIONS!!\n\n";
	}

	system("pause");

}//computeGPA()

int main() {

	do {
		drawMenu(0);		 // pass in 0 to tell drawMenu() to draw Main Menu
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:						  // *** Score Menu ***
			do {
				drawMenu(1); // pass in 1 to tell drawMenu() to draw Score Menu
				computeScore(score);
			} while (score != -1);
			break;

		case 2:						   // *** GPA Menu ***
			do {
				drawMenu(2); // pass in 2 to tell drawMenu() to draw GPA menu
				computeGPA(GPA);
			} while (GPA != -1);
			break;

		case 3:							// *** EXIT ***
			cout << "\n\tUSERS ARE FICKLE.\n\tFINE, BE THAT WAY!\n\n\tGOODBYE! :(\n\n";
			cout << "Press any key to continue breaking my heart...";
			cin.ignore(INT_MAX, '\n');
			cin.get();
			return 0;

		default:
			inputError();
			break;
		}
	} while (menuChoice != 3);
	return 0;
}//main()

// we left off at slide 31 of chapter 6 with Chris Vaughn 3-8-2018