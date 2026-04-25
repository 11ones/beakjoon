// 2022년 5월 13일 22:38:16
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <array>
#include <queue>

using namespace std;

typedef struct
{
	int a;
	int b;
}Connect;

array <Connect, 15> ladder;
array <Connect, 15> snake;

queue <int> q;
array <int, 101> check{ 0 };

void BFS()
{
	check[1] = 1;
	q.push(1);
	while (1)
	{
		if (q.size() == 0)
			break;
		int p = q.front();
		q.pop();
		for (int i{ 1 }; i <= 6; i++)
		{
			bool check_ls{ 0 };
			int p2 = p + i;
			if (p2 > 100)
				continue;
			for (int j{ 0 }; j < ladder.size(); j++)
				if (p2 == ladder[j].a)
				{
					check_ls = 1;
					if (check[ladder[j].b] == 0 || check[ladder[j].b] > check[p] + 1)
					{
						q.push(ladder[j].b);
						check[ladder[j].b] = check[p] + 1;
					}
					
				}
			for (int j{ 0 }; j < snake.size(); j++)
				if (p2 == snake[j].a)
				{
					check_ls = 1;
					if (check[snake[j].b] == 0 || check[snake[j].b] > check[p] + 1)
					{
						q.push(snake[j].b);
						check[snake[j].b] = check[p] + 1;
					}
				}
			if ((check[p2] == 0 || check[p2] > check[p] + 1) && check_ls == 0)
			{
				q.push(p2);
				check[p2] = check[p] + 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> x >> y;
	for (int i{ 0 }; i < x; i++)
		cin >> ladder[i].a >> ladder[i].b;
	for (int i{ 0 }; i < y; i++)
		cin >> snake[i].a >> snake[i].b;
	BFS();
	cout << check[100] - 1;
}