/*
CS135L Week 4
Topics: Interactive Input and Library Functions

Interactive Input: cin 

+ Typically, by default the standard input is the keyboard. 
	- In C++ we can use the stream object "cin" to access it
	- "cin" will work with all primitive data types we discussed in the preveious lab
		- int, float, char, double
	- The same data type rules apply as before
		- Example: Prompting the user for a floating point number, but saving it to a variable of type int will result in loss of precision, and input 
			  failure
		- Example: Reading the character 'a' into a variable of type int will also cause input failure. 
			- Input failure stops all future reads. This will be a more of an issue once we start reading input from files 
	- Deeper into the semester you will learn how to read from files
 
 
 More info on cin: https://msdn.microsoft.com/en-us/library/71t65ya2.aspx http://www.cplusplus.com/doc/tutorial/basic_io/
*/

#include<iostream>
#include<cmath>
#include<cctype>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
    /*
    
    
    // single data input
    cout << "Enter an integer" << endl;
    int userInput;
    cin >> userInput;
    cout << "userInput: " << userInput << endl;
    
    
    // mulitple data input
    cout<<"Enter three numbers seperated by a space.\nFirst two numbers must be of type int, and the last a floating point number: " << endl;
    int a, b;
    double c;
    cin >> a >> b >> c;
    
    cout << "a: " << a << "\nb: " << b <<  "\nc: " << c <<  endl;
    
    
    // cin will ignore any spaces or linefeeds
    cout << "What if the user types spaces before their data?" << endl;
    int d;
    cin >> d;
    cout << "d: " << d << endl;
    
    // we can store an int into a double or float  with no issue
    cout << "Enter an int, we will store it into a double: " << endl;
    double  f;
    cin >> f;
    cout << "f: " << f << endl;
    
   */

/*

// prompt user for input
cout << "Please enter Jake Gyllenhaal's max morning height as a floating point number.\nOnes place value will denote feet, and tenths, and hendredths  will denote inches: " << endl;

// variable to hold user input must be defined before we can use it
double x;
    
// wait for input
cin >> x;
cout << "Jake Gyllenhall's MMH is: " << x <<endl;
    
    
    
    
    

// here we will try to store 'z' into the variable z which is of type int.
// This will cause input failure. This will make us sad.
    
// if you recall from last lab, we can do " int x = 'a' " which will store 97 in x.
// This doesn't work with cin.
cout << "\nUsing a strange alphabetic scale, where 'a' denotes an inferior aptitude towards crafting\ndank memes, and 'z' denotes a superior aptitude, rate Jake Gyllenhaal's dank meme crafting: " << endl;
int z; 
cin >> z;
cout << "Dank meme crafting rating: " << z << endl;

// the cin that follows will be skipped because of the input failure from the previous cin read 
cout << "\nPlease enter your favorite Jake Gyllenhaal tweet:  " << endl;
int y;
cin >> y;
cout << "y: " << y << endl;  


*/


/*
Functions - Library Functions

+ In CS135 you will learn about two types of functions. User defined functions, and predefined functions. Predefined functions may also be called library functions.
	- Today we will review library functions 
		- A function is a collection of statements designed to perform a task. 
 These are stored in header files such as iostream.
		- Someone already wrote these functions so you dont have to!  

Links to libraries that might be useful for CS135L:
 
 cmath: http://www.cplusplus.com/reference/cmath/
 cctype: http://www.cplusplus.com/reference/cctype/
 stdlib.h: http://www.cplusplus.com/reference/cstdlib/
 
 
 
 
 
 // sample user defined function. Dont worry too much about this yet.
 void Foo(int userID, char userInitial){
 
            // Do stuff
 }
 
 
 int main(){
 
 int x = 5;
 
 // function call with arguments x and 'a', also called actual parameters
 Foo(x,'a');
 
 }
 
 
 
*/
    
    /*

    cout << "\nEnter your first initial: " << endl;
    // will only read one character from input...but the other characters that
    // the user entered will automatically be read into the next read statement.
    char firstInitial  = cin.get();
    
    // You don't have to use functions with assignment statements...but they may not always do
    // what you want them to do
    cout << toupper(firstInitial) << endl;
    
    // Overwriting firstInitial with its uppercased counterpart
    firstInitial = toupper(firstInitial);
    
    // This is porbably what we wanted
    cout << firstInitial << endl;
 
    // Your parameters can also be a function call
    cout << "\nEnter your last initial: ";
    cout << "\n" << toupper(cin.get()) << endl;
    
    // Those were all value returning functions. They returned a value of a specific data type
    // that you could then assign. The following is a sample void function.
    
    int q = 100;
    int w = 200;
    
    cout << "\n-Before swap function-" << endl;
    cout << "q == " << q << "\nw == " << w << endl;
    
    // This function doesn't return any value, so there is nothing you can assign to it.
    // Instead it simply performs a task
    swap(q,w);

    cout << "\n-After swap function-" << endl;
    cout << "q == " << q << "\nw == " << w << endl;

    */
    
    return 0;
    

  }

 







