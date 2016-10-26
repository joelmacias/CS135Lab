#include<iostream>
using namespace std; 

int add(int x, int y); 
/*
	1. Value returning function prototype 
		1.1 Function prototype informs compiler about function
	2. This function takes two arguments x, and y. We call these the formal parameters. 
		2.1 You can have as many arguments as you need
		2.2 x and y are being passed by value.
	3. returns a value of type int
	4. Value returning functions must have a data type. Here the data type is int
		4.1 Returning anything other than an integer will result in an error, or an undesired result
			4.1a returning a char value in the example above will return the ascii value
			4.1b returing a double or float in the example above will result in a truncated value
			4.1c returing a string (you will learn these later) will result in an error 
*/ 

void swap(int& x, int&y); 
/*
	1. Void function prototype
		1.1 Function prototype informs compiler about function
	2. This function takes two arguments x, and y. We call these the formal parameters
		2.1 You can have as many arguments as you need
		2.2 x and y are being passed by reference, hence the '&'. 
	3. This function does not return a value, it just performs a task 
*/ 

int addTest(int& x, int& y); 

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

	addResult = addTest(argOne, argTwo);
	/*
		1. argOne, and argTwo are the actual parameters, again. 
		2. This time we change the values of argOne and argTwo inside the function 
	*/
	cout << "\nValue returning function. Pass by reference" << endl;
	cout << "argOne: " << argOne <<"\n" << "argTwo: " << argTwo << "\n" << "argOne + argTwo: " << addResult << endl; 

	int x = 99; 
	int y = 66;
	cout << "\nBefore swap: \n" <<"x: " << x << "\ny: " << y << endl; 
	swap(x,y); 
	 
	cout << "After swap: \n" <<"x: " << x << "\ny: " << y << endl; 
	
	return 0;
}

/*
Here we have the function definitions. They contain the body of the functions, so what the functions actually do
*/ 
int add(int x, int y){
	return x + y; 
}

int addTest(int& x, int& y){
	x = 100;
	y = 50;

	return x + y; 
}


void swap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp; 
}

