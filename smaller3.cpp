#include <iostream>

using namespace std;

int main()
{
	int small = 0;
	cout << "Enter the integer: " << endl;
	int number1 = 0;
	cin >> number1;
	
	cout << "Enter the second integer: " << endl;
	int number2 = 0;
	cin >> number2;
  
	cout << "Enter the third integer: " << endl;
	int number3 = 0;
	cin >> number3;
	
	if (number1 > number2){
		small = number2;
	}
  
	if (number3 < small){
		small = number3;
	}
	
	cout << small << " is the smallest integer." << endl;
	return 0;
}
