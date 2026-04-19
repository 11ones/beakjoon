// 2022년 5월 11일 17:33:47
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
	int t;
	cin >> t;
	for (int q = 0; q < t; q++)
	{
		int error = 0;
		int front = 0;
		int checkR = 0;
		string str;
		int num;
		string arr;
		cin >> str >> num >> arr;
		vector <int> v;
		for (int i = 1; i < arr.length() - 1; i++)
		{
			if (arr[i] == ',' || arr[i] == ']')
				continue;
			else
			{
				int one, two, three;
				one = arr[i] - '0';
				if (arr[i + 1] == ',' || arr[i + 1] == ']')
					v.push_back(one);
				else
				{
					two = arr[i + 1] - '0';
					if (arr[i + 2] == '0')
					{
						v.push_back(100);
						i++;
					}
					else
						v.push_back(one*10 + two);
					i++;
				}
			}
		}
		
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'R')
				checkR++;
			if (str[i] == 'D')
			{
				if (checkR % 2 == 0)
					front++;
				else if (front < v.size())
					v.pop_back();
				else
				{
					error = 1;
					break;
				}
			}
		}
		if (error == 1)
			cout << "error" << endl;
		else
		{
			cout << "[";
			if (checkR % 2 == 0)
			{
				for (int i = front; i < v.size() - 1; i++)
				{
					cout << v[i] << ",";
				}
				cout << v[v.size() - 1];
			}
			else
			{
				for (int i = v.size() - 1; i > front; i--)
				{
					cout << v[i] << ",";
				}
				cout << v[front];
			}
			cout << "]" << endl;
		}
	}
}