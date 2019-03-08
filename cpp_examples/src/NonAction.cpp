//============================================================================
// Name        : cpp_examples.cpp
// Author      : soh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World and other small stuff for testing purposes in C++, Ansi-style
//============================================================================
#include "NonAction.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

NonAction::NonAction() :
		dum(1) {
	cout << dum << endl;
}
void NonAction::setDum(int i) {
	dum = i;
}
int NonAction::getDum() {
	return dum;
}






