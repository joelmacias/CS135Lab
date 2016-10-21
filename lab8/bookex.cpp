#include<iostream>
#include<cmath> 
using namespace std;

int main(){
	cout << "Enter a number: ";
	int userInput;
	cin >> userInput; 
	userInput = abs(userInput);

	int counter = 10;

	int total = 0;
	
	// keep looping until original input is zero
	while(userInput != 0){
		// when this condition is true we know that we
		// have gone over the highest place value of userInput
		// Example: 
		// userInput = 123 // highest place value is the hundreds
		// 123/1000 = 0.123 // we have gone over the highest place value
		// so we can start printing the numbers starting at the highest place value
		if(userInput/counter == 0){
			// we need a stoping point so we dont get stuck in an infinite loop
			// when counter == 0 we stop because we dont want to divide by zero, 
			// and we have already printed out all the digits of userInput
			while(counter > 0){
				// divid the counter by 10 so that we down one place value every iteration
				counter = counter/10;
				// if we enter the body of this if statement when counter == 0 then we will divide 
				// by zero, and cry	
				if(counter != 0){
					// print out the digit in our current place value
					cout << userInput/counter << endl;
					// add said digit to our running total
					total += userInput/counter; 
					// subtract current userinput by our current digit times current place value
					// example:
					// userInput == 123
					// userInput = 123 - ((123/100) * 100)
					// userInput = 123 - 100
					// userInput == 23 
					userInput = userInput - ((userInput/counter) * counter);	
				}
			}
		}
		// keep going a place value until we go one over userinput's hightest place value 
		counter = counter * 10;
	}
	cout << "sum of digits: " << total << endl; 
}
