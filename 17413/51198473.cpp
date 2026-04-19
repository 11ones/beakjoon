// 2022년 11월 1일 19:35:15
// 맞았습니다!!
// 2268KB
// 4ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	if (s[s.size() - 1] != '>')
		s += ' ';
	int len = s.size();
	int savp = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '<')
		{
			for (int j = savp; j < (i + savp) / 2; j++)
			{
				char temp = s[j];
				s[j] = s[i - j + savp - 1];
				s[i - j + savp - 1] = temp;
			}
			savp = i + 1;

			while (s[i] != '>')
				i++;
			savp = i + 1;
		}
		else
		{
			if (s[i] == ' ')
			{
				for (int j = savp; j < (i + savp) / 2; j++)
				{
					char temp = s[j];
					s[j] = s[i - j + savp - 1];
					s[i - j + savp - 1] = temp;
				}
				savp = i + 1;
			}
		}
	}
	cout << s;
}