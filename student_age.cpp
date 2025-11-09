#include<iostream>
using namespace std;
int main()
{
	int age1,age2,age3,age4,age5,age6,age7,age8,age9,age10;
	int TotalAge;
	int AverageAge;
	
	cout <<"Please enter the age of student 1:";
	cin >> age1;
	cout <<"Please enter the age of student 2:";
	cin >> age2;
	cout <<"Please enter the age of student 3:";
	cin >> age3;
	cout <<"Please enter the age of student 4:";
	cin >> age4;
	cout <<"Please enter the age of student 5:";
	cin >> age5;
	cout <<"Please enter the age of student 6:";
	cin >> age6;
	cout <<"Please enter the age of student 7:";
	cin >> age7;
	cout <<"Please enter the age of student 8:";
	cin >> age8;
	cout <<"Please enter the age of student 9:";
	cin >> age9;
	cout <<"Please enter the age of student 10:";
	cin >> age10;
	TotalAge = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
	AverageAge = TotalAge/10;
	cout << "Average age of the clase is :"
		 << AverageAge;
}

