/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1A
The program finds the smallest of two integers. 
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the first number: ";
	int number1 = 0;
	cin >> number1;
	
	cout << "Enter the second number: ";
	int number2 = 0;
	cin >> number2;
	
	if (number1 > number2){
		cout << "The smaller of the two is " << number2 << endl;
	}
    
	if (number2 > number1){
		cout << "The smaller of the two is " << number1 << endl; 
	}
}
