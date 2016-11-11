/*
This program will read names from an 
*/
#include<iostream>
#include<string>
#include<fstream>
#include<cctype> 

using namespace  std;

void Format(ofstream& output, string currentName);

int main(){

// variable of type ifstream will replace cin 
ifstream inputFile; 
// variable of type ofstream will replace cout 
ofstream outputFile; 

string userInputFile;
string currentName;
cout << "Enter name of input file: ";
cin >> userInputFile; 

// opening the file from user input
inputFile.open(userInputFile.c_str());
// opening file where output will be printed 
outputFile.open("formatted_names.txt");

/*
if inputFile returns false that means it was not successfully opened 
 so we negate that false so that we can prompt to the user that the 
 file was not opened 
*/
if(!inputFile){
	cout <<"Error: File not opened"<<endl; 
}
else{
	
	/*
	here we use getline to read the entire line, and store it into the string 
	current name 
	*/
	getline(inputFile,currentName); 

	// here we use inputFile to read until end of file, same way it was used with cin 
	while(inputFile){
		Format(outputFile, currentName); 
		// again we are reading from the data file into the string currentName
		getline(inputFile, currentName); 
	}
}

return 0;

}

// anytime we pass a filestream to a function it must be passed by reference 
void Format(ofstream& output, string currentName){

	// this will loop all chars in a the string currentName
	for(int i = 0; i < currentName.length(); i++){
		
		if(i == 0){
			// at index 0 of currentName we capatilize the char, and assign it back to the string
			currentName[0] = toupper(currentName[0]);
		}
		else if(currentName[i] == ' '){
			i++;
			currentName[i] = toupper(currentName[i]);
		}
		else{
			currentName[i] = tolower(currentName[i]); 
		}
	}
	// here we use output instead of cout, which means we will be printing to the file 
	// specified in main
	output << currentName << endl; 
}

			
