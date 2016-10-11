/* Lab 7 for statment, and linux redirection 

For Looping (Repetition) Structure.
	-for loop syntax-
	
	for(variable initialization; condition; update variable){
		// the code within the body of the for loop will be 
		// executed until the condition is true
	}	
For loop execution:
	1. execute variable initialization 
	2. evalucate condition
		2a. execute the body of the for loop if condition is true
		2b. execute update variable
	3. repeat step 2 until condition is false 



************** How NOT to use a for loop **************************
#include<iostream>
using namespace std;

int main(){

// the body of the for loop will not execute
// the condition is not met 
for(int i = 0; i != 0; i++){
	cout<<"what"<<endl;
	// Don't declare variables inside for loop 
	int  x = 0;
	}
// line 34 will result in an error 
// the scope of 'i' and 'x' is only defined within the body of the for loop 
 cout << i << x << endl;

return 0;
}
********************************************************************



Linux redirection 
	Used to read input from a file, or to print output to a file 

	< changes input from default source to a provided file
	> changes output from default source to a provided file

	Usage:
		./a.out < inputFile > outputFile

	Common issues when reading input from a file:
		- input failure(as discussed in a previous lab) 
			- Caused from mismatched value and variable data type 
			- Program behavior will not be as expected after input 
				failure 
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int inputInt;
	double inputDouble;
	char inputChar;
	char inputBlank;

	cout << fixed << setprecision(1) << endl; 

	// reading frist char line 1 of inputfile
	cin >> inputChar >> inputInt;
	cout << "first char: " << inputChar << endl;
	cout << "int value read into int var: " << inputInt << endl;

	// line 2 of input file
	cin >> inputChar >> inputDouble; 
	cout << "\nsecond char: " << inputChar << endl;
	cout << "double value read into double var: " << inputDouble << endl;

	// here we will read the int 3 into a double variable line 3 inputfile
	cin >> inputChar >> inputDouble;
	cout << "\nthird char: " << inputChar << endl; 
	cout << "int value read into double var: " << inputDouble << endl;

	// reading character 9 into char var
	cin >> inputChar;
	//cin.get() will read one character at a time
	// including whitespace char
	inputBlank = cin.get();
	cout << "\nfourth char, whitespace char, fifth char: " << inputChar << inputBlank;
	cin >> inputChar;
	cout << inputChar << endl;
	// reading a double value into int variable.
	// this will cause input failure
	cin >> inputChar >> inputInt;
	cout << "\nfifth char: " << inputChar << endl;
	cout << "double value read into int var: " << inputInt << endl; 

	// the following read statements will not work as expected  
	// due to the input failure caused on line 86 
	cin >> inputChar >> inputInt;
	cout << "\nsixth char: " << inputChar << endl; 
	cout << "int value read into int var: " << inputInt << endl; 

	cout << endl;
    // you get used to using zero as the starting index for looping
    // you will use it a lot when working with strins and arrays
	for(int i = 0; i < 5; i++){
		cout << "This statment will print 5 times" << endl;
		
		
		// if you want to exit the loop early use the statement below
		if( i == 2){
			break;
		}
		 
	}
	
	return 0;
} 
 
 


		

