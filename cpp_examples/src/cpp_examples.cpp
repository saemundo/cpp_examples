//============================================================================
// Name        : cpp_examples.cpp
// Author      : soh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World and other small stuff for testing purposes in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
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


class Dummy {
private:
	int coeffs[3]; //_a,coeff_b,coeff_c;//,realPart,imaginaryPart;
	float roots[4];
	int limits[2];
	int fact;
	int n;
	vector<int> primes;
	string mess = "empty init";
	//	float b;
	//	float c;
public:
	Dummy() :
		coeffs{ -3, 10, -3 }, roots{ 0.0, 0.0, 0.0, 0.0 }, limits{ 1, 20},fact(1), n(6) {
		find_roots();
		factorial();
		all_primes();

//		cout<<mess<<endl;

	}
	Dummy(int aa, int bb, int cc, int l, int u, int nn) :
		coeffs{ aa, bb, cc }, roots{ 0.0, 0.0, 0.0, 0.0 }, limits{ l, u }, fact(1), n(nn) {
		find_roots();
		factorial();
		all_primes();
		cout<<mess<<endl;

	}
	void find_roots() {

		//    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
		float discriminant;//, realPart, imaginaryPart;
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
	void factorial() {
		for (int i = 1; i <= n; ++i) {
			fact = calc(fact, i, '*');	//*= i;
		}
	}
	void all_primes(){
	    int i, flag;
	    int low = limits[0];
	    while (low < limits[1])
	    {
	        flag = 0;

	        for(i = 2; i <= calc(low,2,'/'); ++i)
	        {
	            if(low % i == 0)
	            {
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
	string get_message(){
		return mess;
	}
	string get_roots(){
		string a = "";
		for(auto & root : roots){
			a = a+to_string(root);
		}
		return a;
	}
	string get_primes(){
		string a = "";
		for(auto &prime : primes){
			a = a+", "+to_string(prime);
		}
		return a;
	}
	int get_factorial(){
		return fact;
	}

};





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
