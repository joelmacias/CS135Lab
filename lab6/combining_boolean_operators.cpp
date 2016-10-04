// Lab 6 Boolean operators and relational operators 
// source of expression : https://www.codecademy.com/learn
// 
#include<iostream>
#include<string> 
#include<cmath>
using namespace std;

int get_input(string expression){
	int userInput;
	cout << "Enter your answer < true: 1 | false: 0 >: ";
	cin >> userInput;
	while(userInput != 1 && userInput != 0){
		cout<<"Invalid input: < true: 1 | false: 0 >"<<endl;
		cout << expression << endl; 
		cout << "Enter your answer: ";
		cin >> userInput;
	}	 
	return userInput; 
}

int main(){

	int totalScore = 0;
	cout << "Depending on what value you expect the expression to return, enter true or false.\n '1' for true, and '0' for false, without the single quotes.\n" <<endl;
 	string correct = "\nDaaaaamnnn <insertYourNameHere>, back at it again with that correct logic! You are correct!\n";
	string incorrect = "\nBad programmer, no diet coke! That is incorrect.\n";


	// first expression
	cout <<"//Expression:"<<endl;
	string expression = "boolean_1 = (3 < 4 || false) && (false || true);";
	cout << expression << endl;
	// get user answer 
	int userInput = get_input(expression); 
	// expression
	if(userInput == (3 < 4 || false) && (false || true)){
		cout << correct << endl;
		totalScore++;  
	}
	else{
		cout << incorrect << endl; 
	}
	cout << "Breakdown:\n(3 < 4 || false) == true\n(false || true) == true\ntrue && true === true\n"<<endl; 


	// second expression
	cout <<"//Expression:"<<endl; 
	expression = "boolean_2 = !true && (!true || 100 != int(pow(5.0,2.0)))";  
	cout << expression << endl; 
	// get user input
	userInput = get_input(expression);
	// expression
	if(userInput == !true && (!true || 100 != int(pow(5.0,2.0)))){
		cout << correct << endl;
		totalScore++;
	}
	else{
		cout << incorrect << endl; 
	} 
	cout << "Breakdown:\n!true == false\n(!true || 100 != 25) == true\nfalse && true == false\n"<<endl;


	// third expression
	cout <<"//Expression:"<<endl; 
	expression = "boolean_3 = true || !(true || false)";
	cout << expression << endl;
	// get user input
	userInput = get_input(expression);
	// expression
	if(userInput == true || !(true || false)){
		cout << correct << endl;
		totalScore++;
	}
	else{
		cout << incorrect << endl;
	}
	cout << "Breakdown:\n true == true\n!(true || false) == false\n true || false == true \n"<<endl; 

	// fourth expression
	cout <<"//Expression:"<<endl;
	expression = "boolean_4 = not not True or False and not True"; 
	cout << expression << endl; 
	// get uer input
	userInput = get_input(expression);
	// expression
	if(userInput == !!true || (false && !true)){
		cout << correct << endl;
		totalScore++; 
	}
	else{
		cout << incorrect << endl;
	}
	cout << "Breakdown:\n!!true == true\nfalse && !true == false\n true || false == true\n"<<endl;

	// fifth expression
	cout <<"//Expressin:"<<endl;
	expression = "boolean_5 = not 10 % 3 >= 10 % 2";
	cout << expression << endl;
	// get user input
	userInput = get_input(expression);
	// expression
	if(userInput == !((10 % 3) >= (10 % 2))){
		cout << correct << endl; 
		totalScore++;
	}
	else{
		cout << incorrect << endl; 
	}
	cout << "Breakdown:\n((10 % 3) >= (10 % 2)) == true\n!true == false\n"<<endl;


	cout << "Your score: " << (totalScore/5.0)*100 << "%" << endl; 
return 0;



}
