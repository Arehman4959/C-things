#include <iostream>
using namespace std;
int main()
{
	int student1,student2,student3,student4,student5,student6,student7,student8,student9,student10;
	int TotalMarks;
	int AverageMarks;
	cout <<"Please enter the marks of student1:";
	cin >> student1;
	cout <<"Please enter the marks of student2:";
	cin >> student2;
	cout <<"Please enter the marks of student3:";
	cin >> student3;
	cout <<"Please enter the marks of student4:";
	cin >> student4;
	cout <<"Please enter the marks of student5:";
	cin >> student5;
	cout <<"Please enter the marks of student6:";
	cin >> student6;
	cout <<"Please enter the marks of student7:";
	cin >> student7;
	cout <<"Please enter the marks of student8:";
	cin >> student8;
	cout <<"Please enter the marks of student9:";
	cin >> student9;
	cout <<"Please enter the marks of student10:";
	cin >> student10;
	TotalMarks = student1+student2+student3+student4+student5+student6+student7+student8+student9+student10;
	cout << "Total marks of the class is:" << TotalMarks << endl;
	AverageMarks = TotalMarks/10;
	cout << "Average marks of the class is:" << AverageMarks << endl;
}
