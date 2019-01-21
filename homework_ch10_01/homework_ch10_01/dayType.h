#pragma once
#include <string>

/*	UML type Diagram:
.---------------------------------------.
|	-int currentDay						|
|	-string dayOfWeek[0-6]				|
|---------------------------------------|
|	+void dayInc()						|
|	+void dayDec()						|
|	+void setDay()						|
|	+string getDay()					|
|--------------------------------------*/

class dayType {
	int currentDay;
	std::string dayOfWeek[7];
	dayType();
public:
	void setDay(int day);
	std::string getDay();
	void dayInc();
	void dayDec();
	void updateDay();
};


