/*
Lab 6 - Control Structures - if, else, else if, switch 

syntax - if one-way selection

	if ( expression )
        // statement will be executed if expression is true
		statement;
        // statement2 will be executed regardless of expression's truth value
        statement2;
 
    if ( expression ) {
        // all statements inside the curly braces will be executed if expression is ture
        statement;
        statement2;
        statement3;
    }
 
    else{
 
    }

 
 
 
syntax - if else two-way selction
 
	if ( expression )
         // statement will be executed if expression is true
		statement;
 
	else{
        // statement2 will be executed only if expression's truth value is false
		statement2;
        statement3;
        }
syntax - if else if else three-way selection
 
	if(expression)
        // statement will be excuted only if expression is true
		statement;
 
	else if(expression2)
        // statement2 will be executed only if expression is false and expression2 is true 
        statement2;
    else
        //statement3 will be executed only if expression, and expression2 are false 
        statement3;
 
 
 Relational Operators:
 Equal to (==)
 Not equal to (!=)
 Less than (<)
 Less than or equal to (<=)
 Greater than (>)
 Greater than or equal to (>=)
 
 Logical Operators: 
 
 Assume variable A holds 1 and variable B holds 0, then:
 
 (A && B) is false.
 &&	Called Logical AND operator. If both the operands are non-zero, then condition becomes true.
 
 (A || B) is true.
 ||	Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true.
 
 !(A && B) is true
 !Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true, then Logical NOT operator will make false.
 
 source: http://www.tutorialspoint.com/cplusplus/cpp_operators.htm
 
 A. !( 1 || 0 )         ANSWER: False
 B. !( 1 || 1 && 0 )    ANSWER: False (&& will be evaluated first. You should be putting parantheses around what you want evaluated first)
 C. !( ( 1 || 0 ) && 0 )  ANSWER: True (Parenthesis are useful)
 

syntax - switch muli-way selection - Allows selection among multiple sections of code, depending on 
									 the value of an integral expression. 
									 Integral types: https://msdn.microsoft.com/en-us/library/cc953fe1.aspx 

									 Body of switch has a series of case labels, and an optional default label.
									 Default label can appear only once, cases may not repeat. 

    // expression must be integral (integer). int/char/boolean
	switch (expression){
 
            // value must be a constant or literal
		case value1:{
 
            // all statements inside the curly braces will be executed if case == expression
			statement;
            statement2;
            
            // execution of the switch statement will exit after break is executed
            // all other cases will not even be considered
            // if you do not end a case with a break statement then execution will continue 
            // to other cases regardless of its relation with expression
			break;
		} 
		case value2:{
			// do more stuff
			break;
		}
		case value3:
		case value4:{
			// do some more stuff
			break;
		}
		case value5:{
			// do stuff
			// notice there is no break statement here, so execution will fall through
		}
		case value6:{
			// do stuff
			break;
		}
		default:{
			// if no other case is excuted, then this will be executed 
		}
}

*/ 

#include<iostream>
using namespace std;

int main(){
    
// prompt user to select an option. This will determine which task the program will perform
cout<<"If you want to tell me your age enter 'a'\nIf you want to tell me the day of the week enter 'b'\nIf you want to enter two numbers type 'c'\n";
char option;
cin >> option;

// option is a variable of type char
// outer switch will take us to task to be performed. Switchception to follow.
switch(option){
        
// 'a' is a literal
case 'a':{
    
	cout << "How old are you?" << endl; 
	int x;
	cin >> x;
    
    // here our case expression is a relational one
    // if x is greater than 21 then we should...get 1
    // i realized on Thursday's lab that this is probably bad practice so dont do this
    // instead you could use an if statment to check the relational value, then assign 1 or 0 to a variable accordingly
    // and use that as your expression for this switch statement
	switch(x >= 21){

        // exection will go into case 1 if the relational expression evaluates to true
		case 1:{
			cout << "You are old enough to drink, and go to war!" << endl;
			break;
		}
        // if the relational expression evaluates to false then exection will go to the default case
		default:{
			cout << "You are not old enough to drink." << endl;
            
			if(x >= 18){
            // if x is greater than or equal to 18 then the output will be printed
			cout << "But at least you can go to war!" << endl;
			}
            
			else{
            // if x is less than 18 then this output will be printed
			cout << "You are also not old enough to go to war. More time to code! " << endl;
			}
            
            // you dont really need this break as its the last case in the switch but it doesnt hurt either
			break;
			}
		}
    // if we were missing this break statement then exection would continue to case 'b' regardless of option's value
	break;
}

case 'b':{
	cout<<"\n\nWhat day is it today?\nMonday? Enter 1\nTuesday? Enter 2\nWednesday? Enter 3\nThursday? Enter 4\nFriday? Enter 5\nSaturday? Enter 6\nSunday? Enter 7\n"<<endl;
	int day;
	cin >> day;
    
    // day is a variable of type int
	switch(day){
        
        // Here we use the fall through 'feature' of the switch statement.
        // Since Monday through Friday is all weekdays then there is no need to print the statement for each case
        // we can be lazy...efficient and only print the statement for the last case that it applies too
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: {
			cout << "Its a weekday!" << endl;
			break; 
			}
        // Here we fall through again
		case 6:
		case 7: {
			cout << "Its a weekend!" << endl; 
			break; 
			}
        // default if the user is silly, entering an option that is not listed.
		default:{
			cout << "That was not an option :( " << endl; 
			break;
			}
		}
    // again we break so that we dont fall through to case 'c'
	break;
}

case 'c':{
	int numb1, numb2;
    cout << "Enter two integers to check\n";
    cin >> numb1 >> numb2; 
    
	// if numb1 and numb2 are eqaul then we print the statement that folows
    // skipping the else statement that follows
	if(numb1==numb2){
		cout << numb1 << " == " << numb2 << endl;
	}
    // if numb1 and numb2 are not equal then we go into the block of the else
	else{
            // statement that follows only printed if numb1>numb2 evaluates to true
    		if(numb1>numb2){ 
      		cout << numb1 << " > " << numb2 << endl;
			}
            // statement that follows only printed if numb1>numb2 evaluates to false
    		else{ 
     		cout << numb2 << " > " << numb1 << endl;
			}	 
		}
	break;
	}	

// default case of the outer switch statement
default:{
    
	cout <<"That wasn't an option :("<<endl;
    
	}
}

return 0;
}