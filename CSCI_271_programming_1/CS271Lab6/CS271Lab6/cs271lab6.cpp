#include <iostream>
#include <string>

using namespace std;

/*VARIABLE DECLARATIONS*/
const int NUM_OF_SCORES = 5;
double scores[NUM_OF_SCORES];

/*FUNCTION PROTOTYPES*/
void gatherScores();
void preamble();
void inputError();
double sumScores();
void printOutput();
void sort();
bool askToQuit();

int main() { 

	do {
		preamble();
		gatherScores();
		printOutput();
	} while (!askToQuit());

	return 0;

}

bool askToQuit() {

	cout << "\n\n\tPRESS ENTER TO CONTINUE(ENTER \'Q\' TO QUIT): ";
	string response = "";
	getline(cin, response);
	return (response[0] == 'q') || (response[0] == 'Q');

}

double sumScores() {

	double scoreSum = 0;
	for (int i = 0; i < NUM_OF_SCORES; i++)
		scoreSum += scores[i];
	return scoreSum;

}

void preamble() {

	system("cls");
	cout << "<======================== CASEY'S AWESOMENESS SCORE AVERAGER AND SORTER! ===================>\n"
		 << "\n\tAKA: \"LAB 6\"\n\n\n";
	cout << "PLEASE ENTER " << NUM_OF_SCORES << " TEST SCORES TO BE CALCULATED:\n";

}

void gatherScores() {

	for (int i = 0; i < NUM_OF_SCORES; i++) {
		cout << "\n\tSCORE [" << i + 1 << "]: ";

		cin >> scores[i];

		if (cin.fail() || scores[i] < 0 || scores[i] > 100) {
			inputError();
			i--;
		}
		else {
			cout << "\tSUCCESSFULLY ADDED " << scores[i] << " TO LIST.\n";
		}
		cin.ignore(INT_MAX, '\n');
	}

}

void printOutput() {

	cout << "\n\n\tTHE SCORES ARE:\n\t";
	for (int i = 0; i < NUM_OF_SCORES; i++)
		if (i != NUM_OF_SCORES - 1) {
			cout << scores[i] << ", ";
		}
		else if (i == NUM_OF_SCORES - 1) {
			cout << "AND " << scores[i] << ".\n";
		}

	cout << "\n\n\tAVERAGE OF ALL TEST SCORES: "
		<< "\t" << sumScores() / NUM_OF_SCORES << endl;

	sort();

	cout << "\n\n\tARRAY SORTED, OUTPUT FOLLOWS:\n\t";
	for (int i = 0; i < NUM_OF_SCORES; i++)
		if (i != NUM_OF_SCORES - 1) {
			cout << scores[i] << ", ";
		}
		else if (i == NUM_OF_SCORES - 1) {
			cout << "AND " << scores[i] << ".\n";
		}

}

void inputError() {

	cout << "\n\tSCORE NOT ADDED.\n\tSCORE MUST BE A POSITIVE NUMBER BETWEEN 0, AND 100. PRESS ENTER TO TRY AGAIN.";
	cin.clear();
	cin.ignore(INT_MAX, '\n');

}

void sort() {

	int leastIndex = 0;
	double tempScore = 0;

	for (int i = 0; i < NUM_OF_SCORES - 1; i++) {
		for (int currentIndex = leastIndex + 1; currentIndex < NUM_OF_SCORES; currentIndex++)
			if (scores[currentIndex] < scores[leastIndex]) {
				tempScore = scores[leastIndex];
				scores[leastIndex] = scores[currentIndex];
				scores[currentIndex] = tempScore;
			}
		leastIndex++;
	}

}