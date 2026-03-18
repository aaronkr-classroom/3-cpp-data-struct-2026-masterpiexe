#include<algorithm>//sort()
#include<iomanip>
#include<ios>
#include<iostream>
#include<string>
#include<vector>
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
	int option = 0;

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

	vector<double> homework;

	double in;

	while (cin >> in)//count개의 점수, 점수는 sum에다 합함
	{
		homework.push_back(in);
	}
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0)
	{
		cout << endl << "ERROR: Enter your HW grades! Try again!"
			<< endl;
		return 1;
	}
	sort(homework.begin(), homework.end());

	cout << "sorted grades: ";
	for (int i = 0; i < homework.size(); i++)
	{
		cout << homework[i] << " ";
	}
	cout << endl;

	//median
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ?
		(homework[mid] + homework[mid - 1]) / 2 :
		homework[mid]
		;
	//compare median and avg
	double average, sum = 0;
	for (int i = 0; i < homework.size(); i++)
	{
		sum += homework[i];
	}
	average = sum / homework.size();
	streamsize prec = cout.precision();

	cout << name << "'s Final grade: median " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median << setprecision(prec) << endl;
	cout << name << "'s Final grade: avg " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * average << setprecision(prec) << endl;

	return 0;


}