/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1C
The program finds whether or not the inputted year is a leap year or common year.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the year: ";
	int year = 0;
	cin >> year;
	
	if (year % 4 != 0) 
	{
		cout << "\nCommon Year" << endl;
	}
	else if (year % 100 != 0)
	{
		cout << "\nLeap Year" << endl;
	}
	else if(year % 400 != 0)
	{
		cout << "\nCommon Year" << endl;
	}
	else
	{
		cout << "\nLeap Year" << endl;
	}
	
	return 0;
}
