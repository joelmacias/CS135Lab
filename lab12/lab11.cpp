/*
Lab 11 arrays 

An array is a structured data type 
	- a structured data type is a data item that is a collection of 
		other data items 
	- an array is a collection of a fixed number of components of the 
		same data type 

Syntax for declaring an array
	dataType arrayName[intExp]; 

Syntax for accessing an array
	arrayName[indexExp] 


Array size is fixed at compile time 

Every time a program is ran the size of the array is fixed 

This essentially means you have to know the data set size you are working with before execution 

int arraySize;
cout <<"Enter the size of the array: " << endl;
cin >> arraySize;

int list[arraySize];
 

The above program will not work because memory allocation for 
static arrays is dealt with during compile time (g++ program.cpp) 

Arrays cannot be compared or assigned. Only the individual elements 
of the array can compared or assigned.

*/

#include<iostream>
#include<string>
using namespace std; 

int main(){

	// zero out array
	int x[10] = {0};    // only works with 0
    double y[10] = {0}; // only works with 0
    char z[10] = {'z'}; // unreliable

    z[1] = 34;  // will store char associated with 34 in this case double quotes
    x[1] = 2.3; // will truncate the .3

    int n = 35;
    z[2] = n; // same behavior as line 48

    double a = 4.4;
    x[2] = a; // same behavior as line 49
    
	// print elements of array
	// Similar to accessing individual chars in strings
	// indexs will be from 0 to n-1
	for(int i = 0; i < 10; i++){
        cout << "\n\nx at index " << i << " :" << x[i];
        cout << "\n\ny at index " << i << " :" << y[i];
        cout << "\n\nz at index " << i << " :" << z[i];
	}
    
return 0;
}
