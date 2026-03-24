#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cout << "enter string: ";
    vector<string> input;
    string x;

    while (cin >> x)
    {
        input.push_back(x);
    }

    int max_len = input[0].size();
    int min_len = input[0].size();

    for (int i = 1; i < input.size(); i++)
    {
        if (input[i].size() > max_len)
            max_len = input[i].size();

        if (input[i].size() < min_len)
            min_len = input[i].size();
    }

    cout << "최대 길이: " << max_len << endl;
    cout << "최소 길이: " << min_len << endl;
}