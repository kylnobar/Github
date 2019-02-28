#include <stdio.h>
#include <iostream>
#include "primeFactorization.h"
/*
	Casey Sorrells
	CSCI 272-6422
	Chapter 11 Assignment

	Problem Statement: this program is supposed to tell us if a number is prime

	First we generate the first 125000 prime numbers and save into first125000Primes[] array.
	Then the user can enter a number and a prime factorization is calculated.
*/
int a = 0;

using namespace std;

int main() {

	primeFactorization make1;

	cout << "Please enter a number to check if it's prime: \n";
	int number;
	cin >> number;

	make1.setNum(number);
	make1.factorization();
	system("pause");
	return 0;
}