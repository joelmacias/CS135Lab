/*
Lab 10 - String Data Type

required: #include <string> 

useful functions: 
1. length() - will return number of chars in string 
2. clear() - erases contents of string, becomes an empty string
3. fornt() - access first element of string
4. back() - access last element of string 
5. erase() - erase chars in string
6. resize() - chagne size of string 

information/examples source: http://www.cplusplus.com/reference/string/string/
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

	// length = 11, indexes are 0 through 10	
	string a = "Hello World";

	// length = 3, indexes are 0 through 2 
	string b = "Hi!"; 

	// check length of a string with length() function
	cout << a << "\nString length: " << a.length() << endl;  


	// Two ways to clear a string
	
	// assign empty double quotes to string
	a = "";
	// length is now zero
	cout << a << "\nString length: " << a.length() << endl;

	// length of string b before clearing
	cout <<"\n" << b << "\nString length: " << b.length() << endl; 
	// length after clearing
	b.clear();
	cout << b  << "\nString Length: " << b.length() << endl; 
	cout << endl; 

	b = "CS 135"; 
	// accessing chars in string
	for(int i = 0; i < b.length(); i++){
		cout << b[i] << " ";
	}
	cout << endl; 
	
	// functions to access front and back of strings 
	cout << "first char of " << b << ": " << b.front() << endl;
	cout << "last char of " << b << ": " << b.back() << endl; 

	// adding to a string 
	cout << "\nbefore: " << b << endl;
	b += " is fun!";
	cout << "after: " << b << endl;

	string d = "CS 202";
	// comparing strings
	cout << "\nChecking if the string: " << b << " is less than the string: " << d << endl; 
	if( b < d){
		cout <<"The character 2 is represented by 50 in the ascii table.\nThe character 1 is represented by the 49" << endl;
	}

	cout << endl;
	// erasing chars in a string
	string eraseString = "This is an example sentence."; 
	// lets change the string to "This is a sentence."
	cout <<"before erase: " << eraseString << endl;
	cout <<"before erase length: " << eraseString.length() << endl; 
	// first arg index to start erasing, second arg number of chars to erase
	eraseString.erase(9,9); 
	cout <<"\nafter erase: " << eraseString << endl; 
	cout <<"after erase: " << eraseString.length() << endl; 


	// resizing a string
	// arg passed will resize string to given size
	string code = "I like to code in C++";
	cout <<"\nBefore resize: " << code << endl;
	code.resize(14); 
	cout <<"\nAfter resize: " << code << endl;
	
	return 0;
}
