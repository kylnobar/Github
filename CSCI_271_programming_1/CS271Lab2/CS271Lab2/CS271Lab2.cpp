#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	double GPA = 4.0;
	int freeMoney = 0;
	string studentLastName = "";
	string studentFirstName = "";

	cout << "Welcome to Casey's GPA and Scholarship reprinter!\n\n";
	cout << "Please Enter the student's First Name:\n";
	cin >> studentFirstName;
	cout << "Please Enter the student's Last name:\n";
	cin >> studentLastName;

	cout << "Now enter " << studentFirstName << " " << studentLastName << "'s GPA:\n";
	cin >> GPA;
	cout << "And now " << studentFirstName << " " << studentLastName << "'s Scholarship amount:\n";
	cin >> freeMoney;

	cout << "Student:" << "\t\t\t\t" << "GPA:" << "\t\t" << "Scholarship:" << "\n"
 		<< "-----------------------------------------------------------------------\n";
	cout << setw(15) << setfill('*') << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(3) << GPA << "\t" << setw(15) << freeMoney << "\n";
	cout << setw(10) << setfill('&') << studentLastName << ", " << setw(10) << studentFirstName << "\t" << setw(10) << showpoint << setprecision(7) << GPA << "\t" << setw(10) << freeMoney << "\n";
	cout << setw(15) << setfill('#') << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(1) << GPA << "\t" << setw(15) << freeMoney << "\n";
	cout << setw(15) << setfill('^') << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(18) << GPA << "\t" << setw(15) << freeMoney << "\n\n";

	cout << setfill(' ');

	cout << setw(15) << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(3) << GPA << "\t" << setw(15) << freeMoney << "\n";
	cout << setw(10) << studentLastName << ", " << setw(10) << studentFirstName << "\t" << setw(10) << showpoint << setprecision(7) << GPA << "\t" << setw(10) << freeMoney << "\n";
	cout << setw(15) << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(1) << GPA << "\t" << setw(15) << freeMoney << "\n";
	cout << setw(15) << studentLastName << ", " << setw(15) << studentFirstName << "\t" << setw(15) << showpoint << setprecision(18) << GPA << "\t" << setw(15) << freeMoney << "\n\n";
	
	system("pause");
	return 0;

}