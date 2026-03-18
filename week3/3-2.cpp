#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cout << "input numbers: ";
	vector<int> number;
	int x;
	while (cin >> x)
		number.push_back(x);
	typedef vector<int>::size_type vec_sz;
	vec_sz size = number.size();
	if (size == 0)
	{
		cout << endl <<
			"you must enter numbers. try again" << endl;
		return 1;
	}
		sort(number.begin(), number.end());

		for (int i = 0; i < number.size(); i++)
		{
			cout << number[i] << " ";
		
		}
	
	
}