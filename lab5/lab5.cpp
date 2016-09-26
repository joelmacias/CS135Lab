/*
 Lab 5 - Formatting output
 
 iomanip - contains manipulators used to format output
 
 setw(n) - Outputs n columns
 - Only applies to next value to be displayed
	- Content will be right justified by default
 - cout << left << ...; will left justify content
 - cout << right << ...; will right justify content
 
 setprecision(n) - Controls output of floating-point numbers
	cout << fixed << setprecision(2);
 */


#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    cout<< "Enter the length: ";
    double length;
    cin >> length;
    
    cout<< "Enter the width: ";
    double width;
    cin >> width;
    
    cout << "Enter the height: ";
    double height;
    cin >> height;
    cout << endl;
    
    
    cout << "Rectangular Prism info" << endl;
    // All floating point types will be displayed with 4 numbers after the decimal point
    cout << fixed << setprecision(4);
    
    // Longest label is 28 characters, add 1 to allow a blank space for all lables. We can assume the largest number will be 7
    cout << "length:" << length << " in" << endl;
    
    cout << "Width:" << width << " in" << endl;
    
    cout <<  "Height:" << height << " in" << endl;
   
    cout << "Volume of rectangular prism:" << " cu in" <<endl;
    
    cout << endl;
    
    cout << "Receipt" << endl;
    
    cout << fixed << setprecision(2);

	double callOfDuty = 59.99, mountainDew = 1.29, doritos = 1.99, tax = .0810;
    
   
    cout << "Call of Duty 19: Ancient Warfare" << "$"  << callOfDuty << endl;
    
    cout << "Mountain Dew" << "$"  << mountainDew << endl;
    
    cout << "Doritos" << "$" << doritos << endl;
    
    cout  << endl;
    

    
    cout << "Total Cost" << "$"  << ((mountainDew + callOfDuty + doritos) * tax) + mountainDew + callOfDuty + doritos << endl;
         
    return 0;
}
