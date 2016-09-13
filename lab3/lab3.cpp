/**
CS135L Week 3
Topic: data types - basic arithmetic, variables and assignment

 
Primative Data types
Type                    Keyword		Bytes       Typical Range
Boolean                 bool		1           true or false
Character               char		1           -128 to 127 or 0 to 255
Integer                 int         4           –2,147,483,648 to 2,147,483,647
Floating point          float		4           Generally ~7 decimals in precision
Double floating point	double 		8           Generally ~15  decimals in precision

sources: https://msdn.microsoft.com/en-us/library/cc953fe1.aspx http://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
Data structure: http://www.cplusplus.com/doc/tutorial/structures/

**/ 

#include<iostream>

using namespace std;

int main(){

	int a = 5;
	int b = 2;
	double answer;

	cout << "a = 5"<<endl;
	cout << "b = 2"<<endl; 
	/** Explicit type casting **/

	cout<<"Explicit type casting"<<endl; 
	answer = a/b; // no casting
	cout<<"a/b: "<<answer<<endl;

	answer = static_cast<double>(a/b); 		// C++ style casting
	cout<<"static_cast<double>(a/b) => "<<answer<<endl;

	answer = static_cast<double>(a)/b; 		// C++ style casting 
	cout<<"static_cast<double>(a)/b => "<<answer<<endl;

	answer = (double)(a/b); 			// C style casting
	cout<<"(double)(a/b) => "<<answer<<endl;

	answer = (double)(a)/b; 			// C style casting 
	cout<<"(double)(a)/b => "<<answer<<endl;

 

	/** Implicit type casting **/
  	cout<<endl; 
	cout<<"aChar = 'a'"<<endl;
	cout<<"Implicit type casting"<<endl; 
	cout<< "1.0 * 5 / 2 => " <<1.0 * 5/2 <<endl;	// 1.0 * 5 / 2 := 5.0 / 2 :=
	cout<< "5 / 2 * 1.0 => "<<5/2 * 1.0 <<endl;		// 5 / 2 * 1.0 := 2 * 1.0 :=
	
	char aChar = 'a';
	int charAnswer = aChar + 5;
	cout<<"aChar + 5 => "<<charAnswer<<endl; 		// 97 + 5
    
    char anotherChar = 97;
    charAnswer = anotherChar + 5;
    cout<<"anotherChar + 5 => "<<charAnswer<<endl; 
	
	cout<<"5 / 2: => "<<5 / 2<<endl; 			// We probably dont want this result
	cout<<"5.0 / 2 => "<<5.0 / 2<<endl;		// We probably want this result

	/** modulus **/
	cout<<"17 % 3 => "<< 17 % 3 <<endl; 		// int remainder, works only with integers  
	cout<<"20 % 25 => "<< 20 % 25 <<endl; 

	/** This will cause an error, mod can only be used with integers  
	double modA = 5;
	double modB = 4; 
	cout<<modA % modB<< modA % modB <<endl;
	**/
	
	/** This will cause an error, cant reassign the value of a constant data type
	const int constNum = 5; 
	constNum = 6;
	**/ 
	
	return 0;
}

