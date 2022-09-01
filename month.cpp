/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1D
The program gives how many days are in a month. 
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter year: ";
	int year = 0;
	cin >> year;
	
	cout << "Enter month: ";
	int month = 0;
	cin >> month;
	
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout << "31 Days" << endl;
	}
	else if(month == 2)
	{
		if (year % 4 != 0) //Common Year
		{
			cout << "28 Days" << endl;
		}
		else if (year % 100 != 0) //Leap Year
		{
			cout << "29 Days" << endl;
		}
		else if(year % 400 != 0) //Common Year
		{
			cout << "28 Days" << endl;
		}
		else //Leap Year
		{
			cout << "29 Days" << endl;
		}
	}
	else
	{
		cout << "30 Days" << endl;	
	}
	
	return 0;
}
