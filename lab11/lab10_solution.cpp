/*
 
 Your challenge for this week is to print out a specific set of words from an input file.
 
 The words to be printed out must meet the following requriments: 
 
 1) The word precideing the word to be printed out must be a palindrome.
 2) The word to be printed out must have its first letter be uppercase, and the following letters must be lowercase
 
 In the following example, the word 'naaN' is a palindrome, thus the word 'Bread' would be printed
 
 HI i lIkE naaN Bread 
 
 
In the following example, the word 'leVel' is a palindrome, but because the word that follows 'leVel' does not meet
the requirments listed above,'THIs' would not be printed
 
 LetS leVel THIs out

 
 You may use filestreams or linux redirection to read the input file
 
 Helpful libraries:
 
 String
 http://www.cplusplus.com/reference/string/string/
 
 ctype.h
 http://www.cplusplus.com/reference/cctype/
 
 
 */

#include <stdio.h>
#include <ctype.h>
#include <string> 
#include <iostream>
#include <fstream>

using namespace std;

// will return true if the passed string is a palindrome, false otherwise
bool PalindromeCheck(string currentWord);

// returns true if the passed string has only its first letter uppercase
bool CheckWordCase(string currentWord);


int main(){
    
    ifstream inFile;                                    // variable representing input file
    
    inFile.open("input.txt");                           // opening file
    
    

    string currentWord = "";                           // empty string variable
    bool isPalindrome = false;
    
    inFile>> currentWord;                                 // initial read from input file
    while (inFile) {
        
        isPalindrome = PalindromeCheck(currentWord);   // will determine if current word is a palindrome
        if (isPalindrome == true) {                    // if isPalindrome is true then read the next word
            inFile >> currentWord;
            if (CheckWordCase(currentWord)) {          // if the word after the palindrome meets the req print it out
                cout << currentWord << endl;
            }
        }

        isPalindrome = false;                          // set is palindrome back to false
        inFile >> currentWord;                            // read the next word
    }
    
    inFile.close();                                 // closing file
    
    return 0;
}

/*
 The function CheckWord Case will determine if the passed string begins with a capital letter, and is followed 
 by all lowercase letters. If so the function will return true, false otherwise.
 
 Parameter: string currentWord
 Return vale: true if first letter is capital, and remaining letters are lowercase. False otherwise.
 */
bool CheckWordCase(string currentWord){
    
    /*
     isupper() will return true if the passed character is uppercase
     currentWord[0] is accessing the first character in the string.
     if currentWord[0] is not uppercase then return false
     */
    if (!isupper(currentWord[0])) {
        return false;
    }
    
    /*
     currentWord.length() returns the length of the string currentWord
     This for statement will loop through the individual characters that make up the string,
     checking if they are uppercase.
     */
    
    for (int i = 1; i < currentWord.length(); i++) {
        
        if (isupper(currentWord[i])) {
            return false;
        }
        
    }
    
    return true;
}

/*
 The function PalindromeCheck  will determine if the passed string is a palindrome.
 
 Parameter: string currentWord
 Return value: true if currentWord is a palindrome
 */
bool PalindromeCheck(string currentWord){
    
    // store the length of currentWord into wordLength
    int wordLength = currentWord.length();
    // substract one from wordLength. We do this so that we dont go out of bounds when checking the
    // characters in the string
    wordLength--;
    
    // loop through the string from 0 to length-1, and from length-1 to 0
    // This will check if the string is a palindrome
    for (int i = 0; i < currentWord.length(); i++, wordLength--) {
        if (tolower(currentWord[i]) != tolower(currentWord[wordLength])) {
            return false;
        }
    }
    return true;
}