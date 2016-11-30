/*
Lab 13 - structs 

	- Group of elements grouped together under one name 
	- These data elements are known as members 
		- Elements can be of diffrent types 

	Example: 

		struct movies {
			int year;
			string title;
			string director; 
		}; 

	using your struct:
		movies movieArray[10] // array of structs 
		movies movie;		  // one struct 


*/

#include<iostream>
#include<string>

using namespace std;

struct movies{
	int year;
	string title;
	string director; 
};

movies Init_Movie();
void Read_Data(movies[], int&); 
void Print_Movies(movies[], int&);
int main(){

	movies movieArray[10]; 	// array of movies 
	int movieCount = 0; 	// keeps track of # of movies in array

	//initialize array of structs
	for(int i = 0; i < 10; i++){
		movieArray[i] = Init_Movie(); 	// movie returned is assigned at current index in array
	}

	Read_Data(movieArray, movieCount); 
	Print_Movies(movieArray, movieCount);


	return 0;
}

movies Init_Movie(){

	movies temp; 
	temp.year = 0;
	temp.title = "";
	temp.director = ""; 

	return temp;
}


void Read_Data(movies movieArray[], int& movieCount){

	// store data in respective member field 
	cin >> movieArray[movieCount].year;
	cin.get();
	getline(cin,movieArray[movieCount].title);
	getline(cin,movieArray[movieCount].director); 

	while(cin){
			
		movieCount++; // increment movie count 
		
		// store data in respective member field 
		cin >> movieArray[movieCount].year;
		cin.get();
		getline(cin,movieArray[movieCount].title);
		getline(cin,movieArray[movieCount].director); 
	}
cout << movieCount;
}

void Print_Movies(movies movieArray[], int& movieCount){

	for(int i = 0; i < movieCount; i++){
		cout <<movieArray[i].title<<" "<<movieArray[i].director<<" "<<movieArray[i].year<<endl; 
	}
}
