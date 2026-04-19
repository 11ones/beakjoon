// 2022년 6월 1일 13:54:47
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <array>
#include <queue>

using namespace std;

typedef struct
{
	int y;
	int x;
}Point;

array <array <int, 20>, 20> bs;

int n;
int sharksize{ 2 };
int eat{ 0 };

int findfish(int y, int x)
{
	queue <Point> sav;
	array <int, 4> findy{ 1,0,0,-1 };
	array <int, 4> findx{ 0,-1,1,0 };

	int answer{ 0 };
	
	while (1)
	{
		queue <Point> q;
		array <array <int, 20>, 20> check{ 0 };

		Point p;
		int checkfind{ 0 };
		check[y][x] = 1;
		q.push({ y,x });

		while (1)
		{
			if (q.size() == 0)
				break;
			p = q.front();
			q.pop();
			for (int i{ 0 }; i < 4; i++)
			{
				if (p.y + findy[i] >= n || p.y + findy[i] < 0 || p.x + findx[i] >= n || p.x + findx[i] < 0 || check[p.y + findy[i]][p.x + findx[i]] != 0 || (checkfind != 0 && check[p.y][p.x] != checkfind))
				{
					continue;
				}
				if (bs[p.y + findy[i]][p.x + findx[i]] == sharksize || bs[p.y + findy[i]][p.x + findx[i]] == 0)
				{
					check[p.y + findy[i]][p.x + findx[i]] = check[p.y][p.x] + 1;
					q.push({ p.y + findy[i], p.x + findx[i] });
				}
				else if (bs[p.y + findy[i]][p.x + findx[i]] < sharksize)
				{
					check[p.y + findy[i]][p.x + findx[i]] = check[p.y][p.x] + 1;
					sav.push({ p.y + findy[i], p.x + findx[i] });
					q.push({ p.y + findy[i], p.x + findx[i] });
					checkfind = check[p.y][p.x];
				}
			}
		}
		Point min{ n + 1,n + 1 };
		while (sav.empty() == 0)
		{
			Point a = sav.front();
			sav.pop();
			if (min.y > a.y)
			{
				min = a;
			}
			else if (min.y == a.y)
			{
				if (min.x > a.x)
				{
					min = a;
				}
			}
		}
		if (min.y == n + 1)
			break;
		eat++;
		if (eat == sharksize)
		{
			eat = 0;
			sharksize++;
		}

		y = min.y;
		x = min.x;
		bs[y][x] = 0;
		answer += check[y][x] - 1;
	}
	return answer;
}

int main()
{
	cin >> n;
	int y{ 0 }, x{ 0 };
	for (int i{ 0 }; i < n; i++)
	{
		for (int j{ 0 }; j < n; j++)
		{
			int k;
			cin >> k;
			bs[i][j] = k;
			if (k == 9)
			{
				y = i;
				x = j;
				bs[y][x] = 0;
			}
		}
	}
	cout << findfish(y, x);
}