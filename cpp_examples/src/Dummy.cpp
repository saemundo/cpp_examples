/*
 * Dummy.cpp
 *
 *  Created on: Mar 8, 2019
 *      Author: saemundur
 */

#include "Dummy.h"
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
float calc(float num1, float num2, char op) {
	float results;
    switch(op)
    {
        case '+':
            results = num1+num2;
            break;

        case '-':
        	results = num1-num2;
            break;

        case '*':
        	results = num1*num2;
            break;

        case '/':
        	results = num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return results;
}
unsigned int Factorial(unsigned int number){
		return number <= 1 ? number : Factorial(number-1)*number;
	}
Dummy::Dummy() :
		coeffs { -3, 10, -3 }, roots { 0.0, 0.0, 0.0, 0.0 }, limits { 1, 20 }, fact(
				1), n(6) {
	find_roots();
	factorial();
	all_primes();
}
Dummy::Dummy(int aa, int bb, int cc, int l, int u, int nn) :
		coeffs { aa, bb, cc }, roots { 0.0, 0.0, 0.0, 0.0 }, limits { l, u }, fact(
				1), n(nn) {
	find_roots();
	factorial();
	all_primes();
	cout << mess << endl;

}
void Dummy::find_roots() {

	//    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
	float discriminant; //, realPart, imaginaryPart;
	//    cout << "Enter coefficients a, b and c: ";
	//    cin >> a >> b >> c;
	float bb = calc(coeffs[1], coeffs[1], '*');
	float ac = calc(4 * coeffs[0], coeffs[2], '*');
	discriminant = calc(bb, ac, '-');
	if (discriminant > 0) {
		roots[0] = (-coeffs[1] + sqrt(discriminant)) / (2 * coeffs[0]);
		roots[1] = (-coeffs[1] - sqrt(discriminant)) / (2 * coeffs[0]);
		mess.assign("Roots are real and different.");
	}

	else if (discriminant == 0) {
		mess.assign("Roots are real and same.");
		roots[0] = (-coeffs[1] + sqrt(discriminant)) / (2 * coeffs[0]);
		roots[1] = roots[0];
		//        cout << "x1 = x2 =" << x1 << endl;
	}

	else {
		//        realPart = -b/(2*a);
		roots[0] = -coeffs[1] / (2 * coeffs[0]);
		roots[1] = sqrt(-discriminant) / (2 * coeffs[0]);
		mess.assign("Roots are complex and different.");
		//        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		//        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}
}
void Dummy::factorial() {
	fact = Factorial(n);
}
void Dummy::all_primes() {
	int i, flag;
	int low = limits[0];
	while (low < limits[1]) {
		flag = 0;

		for (i = 2; i <= calc(low, 2, '/'); ++i) {
			if (low % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
//	        	cout << low << ", ";
			primes.push_back(low);

		++low;
	}
}
string Dummy::get_message() {
	return mess;
}
string Dummy::get_roots() {
	string a = "";
	for (auto & root : roots) {
		a = a + to_string(root);
	}
	return a;
}
string Dummy::get_primes() {
	string a = "";
	for (auto &prime : primes) {
		a = a + ", " + to_string(prime);
	}
	return a;
}
int Dummy::get_factorial() {
	return fact;
}
