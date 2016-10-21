/*
Lab 8 Control Structures (Repetition) - while loop and do while loop

	syntax:
		while (logical expression){
			execute statements until logical expression is false; 
		}

		do {
			execute statements until logical expression is false;
			unlike the while loop, do while will execute at least once
			regardless of the truth value of the logical expression
		} while(logical expression); 
 
 
 When to use a for loop, do while loop, or while loop
 
    for loop: Use when you know how man times this looop should execute 
 
    while loop: Use when you don't know how many times a loop will execute 
 
    do-while loop: Used when your loop should execute at least once

*/

#include<iostream>

using namespace std; 

int main(){
    
    int userInput;
	

    /*
	// Part 1: In this example the body of the loop will be exectued at least once, regardless
	// of the while conditions truth value
 
    cout <<"Enter an integer greater than 0 or less than or equal to 10" << endl;
    cin >> userInput;
	do {
		cout << "You entered: " << userInput << endl;
		if( userInput > 10 || userInput <=0){
			cout <<"Try again, number must be greater than 0 or less than or equal to 10" << endl;
            cin >> userInput;
		} 
    } while (userInput <= 0 || userInput > 10);
    
    
    cout <<"    ";
    int r,c;
    // prints top row of multiplication table
    for (c = 1; c <= userInput; c++){
        if (c == 10){
            cout<<c<<endl;
        }
        else{
            cout << " " << c << " ";
        }
    }
    cout << endl;
    
    cout << "    ";
    
    // prints dashed line under top row of multiplication table
    for (c = 1; c <= userInput; c++){
        cout <<"----";
    }
    cout << endl;
    
    // outer for loop prints left most column
    for (r = 1; r <= userInput; r++){
        cout << r << "*  ";
        // inner for loop will cycle through numbers to be multiplied
        for (c = 1; c <= userInput; c++){
            if (r * c < 10) cout << " ";
            cout << r * c << " ";
        }
        cout << endl;
    }

    */

    

    // Part 2: end of file controlled while oop
    // read once before loop
    cin >> userInput;
    // condition will be false when cin reads past the last value in the input file
    while (cin) {
        int r,c;
        cout <<"    ";
        // prints top row of multiplication table
        for (c = 1; c <= userInput; c++){
            if (c == 10){
                cout<<c<<endl;
            }
            else{
                cout << " " << c << " ";
            }
        }
        cout << endl;
        
        cout << "    ";
        
        // prints dashed line under top row of multiplication table
        for (c = 1; c <= userInput; c++){
            cout <<"----";
        }
        cout << endl;
        
        // outer for loop prints left most column
        for (r = 1; r <= userInput; r++){
            cout << r << "*  ";
            // inner for loop will cycle through numbers to be multiplied
            for (c = 1; c <= userInput; c++){
                if (r * c < 10) 
				cout << " ";
                cout << r * c << " ";
            }
            cout << endl;
        }
        
        cout << endl;
        // this is the read that determines if our while loop will continue
       cin >> userInput;
        
    }

	return 0;
}
