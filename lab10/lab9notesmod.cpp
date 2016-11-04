#include<iostream>
#include"lab9notes.h"

using namespace std; 


int main(){

	int argOne = 1; 
	int argTwo = 2; 

    int addResult = add(argOne, argTwo);
	/* 
		1. argOne, and argTwo are the actual parameters we are passing to the function add
		2. addResult will now have the value returned by add
		3. the value of argOne and argTwo will not change 
	*/ 
	cout << "\nValue returning function. Pass by value" << endl; 
	cout << "argOne: " << argOne <<"\n" << "argTwo: " << argTwo << "\n" <<"argOne + argTo: " << addResult << endl; 


	int x = 99; 
	int y = 66;
	cout << "\nBefore swap: \n" <<"x: " << x << "\ny: " << y << endl; 
	swap(x,y); 
	 
	cout << "After swap: \n" <<"x: " << x << "\ny: " << y << endl; 
	
	return 0;
}

