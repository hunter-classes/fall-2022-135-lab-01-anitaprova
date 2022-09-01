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
