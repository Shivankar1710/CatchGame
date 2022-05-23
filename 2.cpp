#include <iostream>
using namespace std;

struct student
{
		char name[30];
		int rollNo;
		int total;
		char grade;    
		float perc;
		
		void getDetails(void);
		void putDetails(void);
};

void student::getDetails(void)
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter grade: ";
	cin >> grade;
	cout << "Enter total marks out of 500: ";
	cin >> total;
	perc=(float)total/500*100;
}

void student::putDetails(void)
{
	cout << "Student details:"<<endl;
	cout << "Name:"<< name << endl;
	cout << "Roll Number:" << rollNo << endl;
	cout << "grade:" << grade << endl;
	cout << "total:" << total << endl;
	cout << "Percentage:" << perc<<endl;
}

int main()
{
	student std[5];	
	int i;
	for(std[i=0];i<5;i++)
	{std[i].getDetails();}
	
	for(std[i=0];i<5;i++)
	{std[i].putDetails();}
	
	return 0;
}