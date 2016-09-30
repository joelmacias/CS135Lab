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
    
    // Longest label is 28 characters, add 1 to allow a blank space for all lables. We can assume the largest number will be 15 
    cout << left << setw(29) << "length:" << right << setw(15) << length << " in" << endl;
    
    cout << left << setw(29) << "Width:" << right << setw(15) << width << " in" << endl;
    
    cout << left << setw(29) << "Height:" << right << setw(15) << height << " in" << endl;
    
    cout << left << setw(29) << "Volume of rectangular prism:" << right << setw(15) << length * width * height << " cu in" <<endl;
    
    cout << endl;
    
    cout << "Receipt" << endl;
    
    cout << fixed << setprecision(2);
    
    double callOfDuty = 59.99, mountainDew = 1.29, doritos = 1.99, tax = .0810;
    
    // Longest label is 32 characters, add at least 1 more to allow a blank space for all lables. We can assume the largest number will be 7
    cout << left << setw(33) << "Call of Duty 19: Ancient Warfare" << "$" << right << setw(7) << callOfDuty << endl;
    
    cout << left << setw(33) << "Mountain Dew" << "$" << right << setw(7) << mountainDew << endl;
    
    cout << left << setw(33) << "Doritos" << "$" << right << setw(7) << doritos << endl;
    
    cout << setfill('.') << setw(33 + 7 + 1 ) << "" << endl;
    
    cout << setfill(' ');
    
    cout << left << setw(33) << "Total Cost" << "$" << right << setw(7) << ((mountainDew + callOfDuty + doritos) * tax) + mountainDew + callOfDuty + doritos << endl;
    
    
    
    
    return 0;
}
