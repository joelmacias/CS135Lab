/* CS135L  Week #6 */
/* Programming challange #1 */
/*
 Write an interactive C++ program that prompts the user for one number.
 Determine if the number the user typed in is an integer.
 For the purpose of this challenge, we will say that a number with
 a decimal part that is all 0s is also an integer, such as 7.0
 */

#include<iostream>

using namespace std;

int main(){
    double a;
    int b;
    cout << "Enter a integer" << endl;
    cin >> a;
    b = a;
    if (a == b){
        cout << "That's a mighty nice integer ya got there" << endl;}
    
    else{
        cout << "Thats not an integer! Please enter an integer(whole number)" << endl;
        cin >> a;}
    
    if (b == a){
        cout << "Took ya long enough!" << endl;}
    
    
    return 0;
}