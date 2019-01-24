#pragma once
#include <string>

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

class dayType {
	int currentDay;
	int numOfCycles;
	std::string dayOfWeek[7];
	void dayInc();
	void dayDec();
	void printDay();
public:
	dayType();
	void setDay(int day);
	std::string getDay();
	void updateDay(int direction, int num_of_days);
};


