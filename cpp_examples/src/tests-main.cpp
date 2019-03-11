/*
 * tests-main.cpp
 *
 *  Created on: Mar 11, 2019
 *      Author: saemundur
 */
#include <stdlib.h>
#include "Dummy.h"
#include "NonAction.h"
using namespace std;

#define S_OK (0)
#define E_FAIL (-1)

int test_calc(){
	if(calc(2.0,2.0,'*')!=4.0){
		return E_FAIL;
	}
	return S_OK;
}
int test_dum(){
	Dummy dum;
	int f;
	f= dum.get_factorial();
	if (f!=720){
		return E_FAIL;
	}
	return S_OK;
}
int test_non(){
	NonAction nonac;
	nonac.setDum(2);
	if(nonac.getDum()!=2){
		return E_FAIL;
	}
	return S_OK;
}
int run_tests(){
	if(E_FAIL==test_calc()){
		printf("failed calcul\n");
		return E_FAIL;
	}
	if(E_FAIL==test_dum()){
		printf("faild dum\n");
		return E_FAIL;
	}
	if(E_FAIL==test_non()){
		printf("failed non\n");
		return E_FAIL;
	}
}
int main(){
	int result;
	printf("Running tests ...\n");
	result = run_tests();
	if(result==S_OK){
		printf("tests passed\n");
	}else{
		printf("tests failed\n");
	}
	return result;
}

