/*
 
 CS135L Lab 8 Programming Challenge 1 Template
 
 Write a guessing game where the user has to guess a secret integer between 0 and 99, inclusive.
 After every guess the program tells the user whether their number was too large or too small. When the user
 guesses the correct number, prompt the user telling them so. Also the number of attempts, and the secret number
 should be printed.
 
 If the user enters a number less than 0 or greater than 99 prompt the user to choose within the range, and DO
 NOT count the guess towards the number of attempts
 
 I have provided you with the following code:
 
 // initializes random seed
 srand (time(NULL));
 
 // the variable secretNumber will hold the secret number the user has to guess
 // generates secret number between 0 and 99
 int secreteNumber = rand() % 100;

 */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    
    
    // initialize random seem
    srand (time(NULL));
    
    // generate sercret number between  0 and 99
    int secretNumber = rand() % 100;
  
  return 0;
}
