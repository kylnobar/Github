#pragma once
#include <string>

/*	UML type Diagram:
	
		dayType
.-------------------------------.
|	-int currentDay				|
|	-string dayOfWeek[0-6]		|
|-------------------------------|
|	-void dayInc()				|
|	-void dayDec()				|
|	+void setDay()				|
|	+string getDay()			|
|	+void updateDay()			|
|------------------------------*/

class dayType {
	int currentDay;
	std::string dayOfWeek[7];
	//dayType();
	void dayInc();
	void dayDec();
	void printDay();
public:
	dayType();
	void setDay(int day);
	std::string getDay();
	void updateDay(bool incriment, int num_of_days);
};


