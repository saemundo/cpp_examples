/*
 * Main.cpp
 *
 *  Created on: Mar 8, 2019
 *      Author: saemundur
 */

#include <iostream>
#include <cmath>
#include "Dummy.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int num1 = rand() % 10;
	int num2 = rand() % 15 + 1;
	int num3 = rand() % 20;
	int lo = rand() % 10;
	int hi = rand() % 30+10;
	int nn = rand() % 8+2;
	Dummy dumdum, dumdum1(num1,num2,num3,lo,hi,nn);
	cout << "Empty init: " << dumdum.get_message() << " and roots are " << dumdum.get_roots() << endl;
	cout << "Factorial of 6 is " << dumdum.get_factorial() << endl;
	cout << "Primes are " << dumdum.get_primes() << endl;

	cout << "#########" << endl << endl;
	cout << "Random init: " << endl;
	cout << "random numbers are: " << num1 << ", " << num2 << ", " << num3 << ", " << lo << ", " << hi << ", and "<< nn << endl;
	cout << dumdum1.get_message() << " and roots are " << dumdum1.get_roots() << endl;
	cout << "Factorial of 6 is " << dumdum1.get_factorial() << endl;
	cout << "Primes are " << dumdum1.get_primes() << endl;
//	char op = '+';
//	float res = calc(num1,num2,op);
//	cout << "answer is: " << res << endl;
//	float r = rand() % 8 + 2;
//	float fa = factorial(r);
//	cout << "factorial of " << r << " is " << fa << endl;
//	int a = rand() % 50;
//	int b = rand() % 50 + 50;
//	all_primes(a,b);
	return 0;
}

