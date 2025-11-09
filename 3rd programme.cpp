#include <iostream>
using namespace std;
int main()
{
	string name, city;
	int age;
	
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Enter your city";
	cin >> city;
	
	cout << "\n --- Personal information ---- \n";
	cout <<"Name: " << name << endl;
	cout <<"Age:" << age << endl;
	cout <<"City:" << city << endl;
	
	return 0;
	
}
