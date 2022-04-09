//Celeste Going
//Lab 0
/*This program sets up two variables, adds them together, and prints the sum.*/

#include<iostream>

using namespace std;

int main()
{
	int num1, num2, sum;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;
	cout << endl;

	sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << ".";
	cout << endl;
	cout << endl;

	system("PAUSE");
	return 0;
}