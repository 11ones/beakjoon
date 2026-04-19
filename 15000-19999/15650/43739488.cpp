// 2022년 5월 24일 21:59:18
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>

using namespace std;

array <int, 8> num{ 1,2,3,4,5,6,7,8 };
array <int, 8> digit{ 1,2,4,8,16,32,64,128 };
int n, m;

void out()
{
	for (int i{ 1 }; i < digit[n]; i++)
	{
		int countdigit{ 0 };
		for (int j{ 0 }; j < n; j++)
		{
			if (i & digit[j])
			{
				countdigit++;
			}
		}
		if (countdigit == m)
		{
			for (int j{ 0 }; j < n; j++)
			{
				if (i & digit[j])
				{
					cout << num[j] << " ";
				}
			}
			cout << "\n";
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	out();
}