/* CS135L  Week #6 */
/* Programming challange #1 */
/*
    Write an interactive C++ program that prompts the user for one number.
    Determine if the number the user typed in is an integer.
    For the purpose of this challenge, we will say that a number with a decimal part that is all 0s is also an integer, such as 7.0
 */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    cout << "Enter a number: " << endl;
    double x;
    cin >> x;
   
	x = abs(x);
    int y = x;
    if (x > y) {
        cout <<"The number entered is not an integer"<<endl;
    }
    else{
        cout <<"The number entered is an integer!"<<endl;
    }
    
    return 0;
}
