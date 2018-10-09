// IntroToComputerProgrammingLAB1A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	// first setting up some variables to work with
	long firstNumber = 0;
	long secondNumber = 1;
	long thirdNumber = 0;
	int i = 0;
	
	// use a do loop to iterate through the fibonacci numbers, and print them on the screen.
	do
	{
		std::cout << secondNumber << "\n";

		thirdNumber = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = thirdNumber;

		i++;

	} while (i <= 40);

	// return 0, because that's what you do apparently...
    return 0;
}

