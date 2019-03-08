//============================================================================
// Name        : cpp_examples.cpp
// Author      : soh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World and other small stuff for testing purposes in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

class CPP_Examples{
private:
	int dum;

public:
	CPP_Examples():dum(1){
		cout << dum << endl;
	}
	void setDum(int i){
		dum = i;
	}
	int getDum(){
		return dum;
	}
};






