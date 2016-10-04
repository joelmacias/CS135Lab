/* Programming challange #1 */
/* CS135L  Week #6 */ 
/*
   Write an interactive C++ program that allows the user to choose between computing the sum and computing the
   product of 1......,n. Prompt the user for n. n must be a positive integer. Assume user will only input
    integers
 
   You must do error checking, if the user enters an invalid option, print to the screen saying so,
   and exit the program.

   If the user selects to find n!, then n must be <50.

   Print to the screen the user input n to be computed, the option the user selected, and the final result of the sum of 1...,n. or n!
 
   Since we have not yet gone over repetition structures, I have provided you with a factorial function, 
   and a sum function.

   The factorial function accepts a parameter of type int, and returns n!, where n is the user input.
   factortial(int userInput) 

   The sum function accepts a parameter of type int, and returns the sum from 1....,n.
   sum(int userInput) 

   We have not yet gone over creating your own functions, so don't worry about their implementation,
   just think of them as using library functions, like pow(), and toUpper().

 */


#include<iostream>
using namespace std; 
// Function will return n!   
unsigned long long factorial (int userInput);

// Function will return the sum from 1 to n
unsigned long long sum (int userInput);

int main(){

  // YOUR CODE GOES HERE

  return 0;
}



unsigned long long factorial(int userInput){
    unsigned long long  k = userInput;
    for(int i = k-1; i > 0; i--){
        k = k * i;
    }


  return k;
}

unsigned long long sum (int userInput){
    unsigned long long sum = 0;
    for(int i = 0; i <= userInput; i++){
        sum = sum +  i;
    }

  return sum;
}
