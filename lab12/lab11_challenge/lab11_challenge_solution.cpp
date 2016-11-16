/*
 
 Lab 11 challenge solution
 
 For this weeks challenge you are to sort a set of numbers without using bubble sort...thats for next week.
 
 Instead, you will use counting sort.
 
 Read the numbers from the provided file until you reach end of file, store these numbers into an array, 
 count the occurrences of each number. Print out the numbers that occurred an even number of times. The numbers
 must be printed in ascending order, and must only be printed once.
 
 All the integers in the array will be between 0 and 99
 
 The maximum amount of numbers in the test file will be 100
 
 
 
 
 */


#include <iostream>
#include <fstream>




using namespace std;


int main(){
    
    
    // integer array that can hold 100 integers, initialized to zero
    int numbersReadFromFile[100] = {0};
    
    // integer array that will hold the count the number of times
    // an integer occurs
    int numberCount[100] = {0};
    
   
    

    // variable representing input file
    ifstream inFile;
    
    // opening input file
    inFile.open("input.txt");

  
    
    // reading integers until end of file
    int i = 1;
    inFile >> numbersReadFromFile[0];
    while (inFile) {
        inFile >> numbersReadFromFile[i];
        i++;
    }
    
   
    // Here we use the value of the integer located at position
    // numbersReadFromFile[i] to keep track of how many times
    // a certain integer occurred
    for (int i = 0; i < 100; i++) {
        
        numberCount[numbersReadFromFile[i]]++;
        
    }
    
    // If an integer occurred an even number of times
    // we print out the integer
    for (int i = 0; i < 100; i++) {
        
        if (numberCount[i] % 2 == 0 && numberCount[i] > 0) {
            cout<< i << endl;
        }
    }
  
    
    return 0;
}

