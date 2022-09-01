#include <iostream>

using namespace std;

int main()
{
	int small = 0;
	cout << "Enter the first number: ";
	int number1 = 0;
	cin >> number1;
	
	cout << "Enter the second number: ";
	int number2 = 0;
	cin >> number2;
  
	cout << "Enter the third number: ";
	int number3 = 0;
	cin >> number3;
	
	if (number1 > number2){
		small = number2;
	}
	else if (number1 < number2){
		small = number1;
	}
  
	if (number3 < small){
		small = number3;
	}
	
	cout << "The smaller of the three is " << small << endl;
	return 0;
}
