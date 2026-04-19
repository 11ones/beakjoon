// 2022년 5월 15일 18:21:44
// 맞았습니다!!
// 3000KB
// 28ms
#include <iostream>
#include <array>

using namespace std;

array <array <int, 500>, 500> arr;
int n, m;

int I0()
{
	array <int, 4> px{ 0,1,2,3 };
	array <int, 4> py{ 0,0,0,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < m - 3; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int I1()
{
	array <int, 4> px{ 0,0,0,0 };
	array <int, 4> py{ 0,1,2,3 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 3; i++)
	{
		for (int j{ 0 }; j < m; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int O0()
{
	array <int, 4> px{ 0,1,0,1 };
	array <int, 4> py{ 0,0,1,1 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int L0()
{
	array <int, 4> px{ 0,0,0,1 };
	array <int, 4> py{ 0,1,2,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int L1()
{
	array <int, 4> px{ 0,1,2,2 };
	array <int, 4> py{ 1,1,1,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int L2()
{
	array <int, 4> px{ 0,1,1,1 };
	array <int, 4> py{ 0,0,1,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int L3()
{
	array <int, 4> px{ 0,0,1,2 };
	array <int, 4> py{ 0,1,0,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int J0()
{
	array <int, 4> px{ 1,1,1,0 };
	array <int, 4> py{ 0,1,2,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int J1()
{
	array <int, 4> px{ 0,1,2,2 };
	array <int, 4> py{ 0,0,0,1 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int J2()
{
	array <int, 4> px{ 1,0,0,0 };
	array <int, 4> py{ 0,0,1,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int J3()
{
	array <int, 4> px{ 0,0,1,2 };
	array <int, 4> py{ 0,1,1,1 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int S0()
{
	array <int, 4> px{ 0,0,1,1 };
	array <int, 4> py{ 0,1,1,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int S1()
{
	array <int, 4> px{ 0,1,1,2 };
	array <int, 4> py{ 1,1,0,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int Z0()
{
	array <int, 4> px{ 1,1,0,0 };
	array <int, 4> py{ 0,1,1,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int Z1()
{
	array <int, 4> px{ 0,1,1,2 };
	array <int, 4> py{ 0,0,1,1 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int T0()
{
	array <int, 4> px{ 0,0,0,1 };
	array <int, 4> py{ 0,1,2,1 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int T1()
{
	array <int, 4> px{ 0,1,2,1 };
	array <int, 4> py{ 1,1,1,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int T2()
{
	array <int, 4> px{ 0,1,1,1 };
	array <int, 4> py{ 1,0,1,2 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 2; i++)
	{
		for (int j{ 0 }; j < m - 1; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}
int T3()
{
	array <int, 4> px{ 0,1,1,2 };
	array <int, 4> py{ 0,1,0,0 };

	int max{ 0 };

	for (int i{ 0 }; i < n - 1; i++)
	{
		for (int j{ 0 }; j < m - 2; j++)
		{
			int sum{ 0 };
			for (int k{ 0 }; k < 4; k++)
			{
				sum += arr[i + py[k]][j + px[k]];
			}
			if (max < sum)
				max = sum;
		}
	}
	return max;
}

void compare()
{
	int max{ 0 };
	int sav{ I0() };
	if (max < sav)
		max = sav;
	sav = I1();
	if (max < sav)
		max = sav;
	sav = O0();
	if (max < sav)
		max = sav;
	sav = L0();
	if (max < sav)
		max = sav;
	sav = L1();
	if (max < sav)
		max = sav;
	sav = L2();
	if (max < sav)
		max = sav;
	sav = L3();
	if (max < sav)
		max = sav;
	sav = J0();
	if (max < sav)
		max = sav;
	sav = J1();
	if (max < sav)
		max = sav;
	sav = J2();
	if (max < sav)
		max = sav;
	sav = J3();
	if (max < sav)
		max = sav;
	sav = S0();
	if (max < sav)
		max = sav;
	sav = S1();
	if (max < sav)
		max = sav;
	sav = Z0();
	if (max < sav)
		max = sav;
	sav = Z1();
	if (max < sav)
		max = sav;
	sav = T0();
	if (max < sav)
		max = sav;
	sav = T1();
	if (max < sav)
		max = sav;
	sav = T2();
	if (max < sav)
		max = sav;
	sav = T3();
	if (max < sav)
		max = sav;
	cout << max;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	compare();
}