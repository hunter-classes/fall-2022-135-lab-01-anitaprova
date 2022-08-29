#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the integer: ";
	int number1 = 0;
	cin >> number1;
	
	cout << "Enter the second integer: ";
	int number2 = 0;
	cin >> number2;
	
	if (number1 > number2){
		cout << number2 << " is the smaller integer." << endl;
	}
    
	if (number2 > number1){
		cout << number1 << " is the smaller integer." << endl; 
	}
}
