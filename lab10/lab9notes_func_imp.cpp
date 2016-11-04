#include<iostream>
#include"lab9notes.h"

/*
Implementation of the add function
*/
int add(int x, int y){
	return x + y; 
}

/*
Implementation of the swap function
*/
void swap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp; 
}

