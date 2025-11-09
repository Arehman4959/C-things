#include <iostream>
using namespace std;
int main()
{
	int number;
	int digit;
	cout << "Please enter a 4 digit integer:";
	cin >> number;
	digit = number%10;
	cout << "The digit is:" << digit << '\n';
	number = number/10;
	digit = number%10;
	cout << "The digit is:" << digit << '\n';
	number = number/10;
	digit = number%10;
	cout << "The digit is:" << digit << '\n';
	number = number/10;
	digit = number%10;
	cout << "The digit is:" << digit << '\n';
	number = number/10;
	digit = number%10;
	
}
