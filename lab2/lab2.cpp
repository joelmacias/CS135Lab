/* - Preprocessor directive: #include -
Allows your source program to use functions, objects,and contents of other files. These are features that
are not built into the language. 
Header <iostream> defines standard input/ouput.
This allows you to use 'cout' to print to the screen, as well as 'cin' to read input. 
'cin' will be discussed at a later time.

general syntax:
#include<headerfilename>

Sources, and more information 
Preprocessor Directives: https://msdn.microsoft.com/en-us/library/3sxhs2ty.aspx
iostream: http://www.cplusplus.com/reference/iostream/ 
*/
#include<iostream>

/* - Namespaces: std - 

A namespace is a declarative region that provides a scope to identifiers (such as cout and cin) 
They are used to organize code, and prevent names of types from interfering with each other. You'll go more in depth with namespaces in CS202.

'std' is the namespace of the C++ Standard Library 

general syntax:
using namespace <namespaceidentifier>

Sources, and more information:
std: https://en.wikipedia.org/wiki/C%2B%2B_Standard_Library
namespaces: https://msdn.microsoft.com/en-us/library/5cb46ksf.aspx

*/

using namespace std;


/* - functions: int main() -
A function is a collection of code which is given a name, and a type. Below we have a function named 'main' of 
type int. The empty closed parenthesis indicate that main takes no arguments. Function argument, functions, and function types will be discussed in greater detail later. For now just know that all your programs must have a function of type int, named 'main' 

All C++ programs need a main function, generally its where execution begins. 

'return 0' is the exit status of the program. Generally in C++ and many other languages, an exit 
status of 0 translates to successfull execution

All code inside of the curly braces is within the scope of main 

general syntax of main function:
int main() {

// your code goes here

return 0; 
} 

*/


int main() {

std::cout<<"Spanish: ";
std::cout<<"Hola Mundo"<<std::endl; 

    
cout<<"English: ";
cout<<"Hello World"<<endl;

cout<<"Dutch: ";
cout<<"Hallo Wereld"<<endl;
cout<<"German: Hallo Welt"<<endl;

return 0;
    
} 
