//Implementation File for the class integerManipulation
 
#include <iostream>
#include <cmath>
#include "integerManipulation.h"
 /*
	Casey Sorrells
	CSCI 272-6422
	Chapter 11 Assignment

	Problem Statement: this program is supposed to tell us if a number is prime

	First we generate the first 125000 prime numbers and save into first125000Primes[] array.
	Then the user can enter a number and a prime factorization is calculated.
*/
using namespace std;

void integerManipulation::setNum(long long n)
{
    num = n;
}

long long integerManipulation::getNum()
{
    return num;
}

void integerManipulation::reverseNum()
{
	int rNum = 0;
	int number = num;
	bool isNegative = false;
	
	if (number < 0)
	{
		number = -number;
		isNegative = true;
	}

	while (num > 0)
	{
		rNum = rNum * 10 + number % 10;
		number = number / 10;
	}

	if (isNegative)
		rNum = -rNum;
		
	revNum = rNum; // final answer
}

void integerManipulation::classifyDigits()
{
    long long temp;

    temp = abs(num);

    int digit;

    while (temp != 0)
    {
         digit = temp - (temp / 10 ) * 10;
         temp = temp / 10;

         if (digit % 2 == 0)
         {
             evensCount++;
             if (digit == 0)
                 zerosCount++;
         }
         else
             oddsCount++;
     }
}

int integerManipulation::getEvensCount()
{
    return evensCount;
}

int integerManipulation::getOddsCount()
{
    return oddsCount;
}

int integerManipulation::getZerosCount()
{
    return zerosCount;
}

int integerManipulation::sumDigits()
{
	//int num;
	int tempNum = num;
	int digit;
	int sum = 0;
	int pwr = 0;


	if (tempNum < 0)
		tempNum = -tempNum;

		//Find the highest power of 10 that divides the number

	while (tempNum / static_cast<int>(pow(10.0, pwr)) > 10)
		pwr++;
	
	while (tempNum > 0)
	{
		digit = tempNum / static_cast<int>(pow(10.0, pwr));
		cout << digit << " ";
		sum = sum + digit;
		tempNum = tempNum % static_cast<int>(pow(10.0, pwr));
		pwr--;
	}

	return sum; 
}

integerManipulation::integerManipulation(long long n)
{
    num = n;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
}
