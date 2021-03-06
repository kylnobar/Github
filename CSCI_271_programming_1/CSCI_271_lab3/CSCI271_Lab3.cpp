#include <iostream>

using namespace std;

int main() {

	int score = 0;
	double GPA = 0.0;
	int menuChoice = 0;

	do {

		menuChoice = 0;

		cout << "\nMain Menu\n\n\n"

			 << "1. Enter your test score, I'll tell you the grade. \n"
			 << "   (0-59 F, 60-69 D, 70-79 C, 80-89 B, 90-100 A, everything else is invalid)\n\n"

			 << "2. Enter your GPA to see if you made the Dean's List. \n"
			 << "   (3.9 - 4 makes the dean's list, 0-3.8 doesn't, everything else is invalid)\n\n"

			 << "3. Quit\n\n\n"

			 << "Enter a choice: ";

		cin >> menuChoice;

		cout << "\n\n";
		//system("CLS");

		switch (menuChoice) {

		case 1: //Report Grade from Score
			cout << "\nGrade Menu\n\n\n"
				 << "Please Enter your test score: ";
			cin >> score;

			if (score >= 110) //Since the Int type truncates remainders of division, must protect against user entering '114',
				score = 109;  //it will truncate it to '11' and report a low grade.

			cout << "\n\n";

			switch (score / 10) {

			case 10:
				if (score % 10 != 0) {
					cout << "Did you get extra credit or something? How does one do better than 100%??\n\n";
					break;
				}
				cout << "A Perfect score! You should consider getting a life!\n\n";
				break;

			case 9:
				cout << "Grade: A \nGREAT JOB! You nailed it!\n\n";
				break;

			case 8:
				cout << "Grade: B \nGood Job! You did well!\n\n";
				break;

			case 7:
				cout << "Grade: C \nJust remember: C's get Degrees!\n\n";
				break;

			case 6:
				cout << "Grade: D \nYou can do better than this!\n\n";
				break;

			case 5:
				cout << "Grade F: Can you still Credit/No Credit???\n\n";
				break;

			default:
				cout << "Less than 50%? Did you even try???\n\n";

			} //switch (score / 10)
			break;

		case 2: //Check for dean's list
			
			cout << "\nGPA Menu\n\n\n"
				 << "Please enter your current GPA: ";
			cin >> GPA;

			if (GPA >= 3.90 && GPA <= 4.0) {
				cout << "CONGRATULATIONS! You made the Dean's List! (get a life)\n\n";
			}
			else if (GPA > 4.0) {
				cout << "\r" << "ERROR: GPA must be less than, or equal to 4.0\n\n"
					 << "Returning to Main Menu\n\n";
			}
			else if (GPA < 3.90 && GPA >= 0) {
				cout << "I'm sorry, you don't make the Dean's List...\n\n";
			}
			else {
				cout << "ERROR: GPA must be greater than, or equal to ZERO\n\n"
					 << "Returning to Main Menu...\n\n";
			}
			break;

		case 3:
			cout << "I KNEW YOU WOULD LEAVE ME!! \n"
				 <<	"all users are the same...\n"
				 << "*CRIES*\n\n";
			system("pause");
			break;

		default:
			cout << "\r" << "ERROR: INVALID ENTRY.\n\nReturning to Main Menu...\n\n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');

		} //switch(menuChoice)
			
	} while (menuChoice != 3); //while(menuChoice != 3)

	return 0;

} //main
