#include <iostream>
#include "integerManipulation.h"
#include "primeFactorization.h" 
 
/*
	Casey Sorrells
	CSCI 272-6422
	Chapter 11 Assignment

	Problem Statement: this program is supposed to tell us if a number is prime

	First we generate the first 125000 prime numbers and save into first125000Primes[] array.
	Then the user can enter a number and a prime factorization is calculated.
*/

using namespace std; 

void primeFactorization::factorization()
{
	//Function to output the prime factorization of num 
	//Postcondition: Prime factorization of num is printed;
    //See Progamming Exercise 14.
	long long n = primeFactorization::getNum();
	// primeFact(n, first125000Primes, int& length, int& firstPrimeFactIndex);   <---- no idea how to even call this function. 
}

primeFactorization::primeFactorization(long long n) : integerManipulation(n)
{
	const int MAX_NUM = 10000000;
	//Constructor with a default parameter.
	  //The instance variables of the base class are set according 
	  //to the parameters and the array first125000Primes is 
	  //created.
	
	// create a dynamic array to hold all numbers from 2 thru n numbers. this is the masterList[]
	bool *masterList = new bool[MAX_NUM];
	for (long i = 0; i <= MAX_NUM - 1; i++)
		masterList[i] = true;

	first125000PrimeNum(first125000Primes, MAX_NUM - 1, masterList);
}

void primeFactorization::primeFact(long long num, long long list[], int length, 
                   int firstPrimeFactIndex)
{
	//generate factors of num, using list[] to find the multiples if any.
	// get largest prime 
	for (int i = 1; i >= length; i++) {
		if (num % list[i] == 0) {
			cout << num / list[i] << " * " << " ";
		}
	}
	cout << " = " << num << "\n"
		<< "So it isn't prime.";
}
void primeFactorization::first125000PrimeNum(long long list[], int length, bool master[])
{
	for (int i = 2; i * i < length; i++) {				// start at 2, which is prime... 
		if (master[i] == true)							// if current master index is true, it is prime
			for (int j = i * i; j <= length; j += i)	// from last prime^2, iterate through master list setting multiples of last prime to false 
				master[j] = false;						// set next multiple to false
	}
	// let i start at 2, and will represent the multiple being checked. also this is the first prime. 
	// iterate through i-n at multiple of i. (1*i, 2*i, 3*i, 4*i, 5*i, 6*i... to n*i)
	// throughout the iteration process, mark each index of the number list to false when it is a multiple of i.
	// when n is reached, start over, look for the next true value greater than i, set i to that number.(this is the next prime)
	// rinse and repeat
	// once all primes have been "skipped", use master list to set prime values:

	int p = 1;										// keep track of current index to be set to next prime number
	for (int ii = 2; ii <= length; ii++)
		if (master[ii] == true) {					// if current master[] value is still set to true, it is prime, set list[i] to that value
			cout << " [" << p << "] " << ii << "  ";// for testing, print primes in console [nth prime] prime
			list[p] = ii;
			p++;
			if (p >= 125001)
				break;
		}
}


void primeFactorization::primeTest(long long num, long long list[], int length, 
                   bool& primeNum, int& firstPrimeFactIndex)
{
    //See Progamming Exercise 14.
}
bool primeFactorization::isPrime(long long number)
{
    //See Progamming Exercise 14.
	
    return false;
}