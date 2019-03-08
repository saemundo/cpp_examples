/*
 * Dummy.h
 *
 *  Created on: Mar 8, 2019
 *      Author: saemundur
 */
#ifndef DUMMY_H_
#define DUMMY_H_
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
class Dummy
{
private:
	int coeffs[3]; //_a,coeff_b,coeff_c;//,realPart,imaginaryPart;
	float roots[4];
	int limits[2];
	int fact;
	int n;
	vector<int> primes;
	string mess;// = "empty init";
public:
	Dummy();
	Dummy(int aa, int bb, int cc, int l, int u, int nn);
	void find_roots();
	void factorial();
//	unsigned int Factorial(unsigned int number);
	void all_primes();
	string get_message();
	string get_roots();
	string get_primes();
	int get_factorial();

};




#endif /* DUMMY_H_ */
