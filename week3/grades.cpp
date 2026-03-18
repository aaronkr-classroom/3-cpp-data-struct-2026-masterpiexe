#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
using namespace std;

int main()
{
	/*
		한 과목에서
		중간=20%
		기말 40%
		과제 40%
	*/
	cout << "enter your region: 1. Korea 2. US.";
	int option=0;
	
	string name, fname, lname;
	while (option != 1 && option != 2)
	{
		cin >> option;
		
		if (option == 1)
		{
			cout << "name: ";

			cin >> name;
			

		}
		else if (option == 2)
		{
			cout << "first name, last name: ";

			cin >> fname >> lname;
			name = fname + " " + lname;
		}
		else
		{
			cout << "enter correnct region." << endl;
		}
		
	}
	cout << "hello, " << name << "!" << endl;
	cout << "input Midterm + Final grades: ";
	double midterm, final;
	cin >> midterm >> final;//space bar or \n 

	cout << "enter all your homework grades, " "followed by EOF:";

	int count = 0;
	double sum=0;

	double in;

	while (cin >> in)//count개의 점수, 점수는 sum에다 합함
	{
		++count;
		sum += in;
	}
	streamsize prec = cout.precision();

	cout << name << "'s Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * (sum / count) << setprecision(prec) << endl;

	return 0;

	
}