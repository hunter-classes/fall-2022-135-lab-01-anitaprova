#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the year: " << endl;
	int year = 0;
	cin >> year;
	
	if (year % 4 != 0) 
	{
		cout << "Common Year" << endl;
	}
	else if (year % 100 != 0)
	{
		cout << "Leap Year" << endl;
	}
	else if(year % 400 != 0)
	{
		cout << "Common Year" << endl;
	}
	else
	{
		cout << "Leap Year" << endl;
	}
	
	return 0;
}
