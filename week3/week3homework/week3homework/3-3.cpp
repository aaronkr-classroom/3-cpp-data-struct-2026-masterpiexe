#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cout << "enter letters: ";
	vector<char> letter;
	char x;
	while (cin >> x)
	{
		letter.push_back(x);

	}
	sort(letter.begin(), letter.end());
	
	for (int i = 0; i < letter.size(); i++)
	{
		if (i > 0 && letter[i] == letter[i - 1])
			continue;
		int cnt = 1;
		for (int j = i + 1; j < letter.size(); j++)
		{
			if (letter[i] == letter[j])
			{
				cnt++;
			}
		}
		cout << letter[i] << ":" << cnt << endl;
	}
}