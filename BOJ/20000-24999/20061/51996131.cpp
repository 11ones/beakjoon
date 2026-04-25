// 2022년 11월 22일 20:51:38
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

bool blue[6][4];
bool green[4][6];

int main()
{
	int score = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t, x, y;
		cin >> t >> y >> x;
		bool check = 0;
		switch (t)
		{
		case 1:
			check = 0;
			for (int j = 1; j < 5; j++)
			{
				if (blue[j + 1][y] == 1)
				{
					blue[j][y] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
				blue[5][y] = 1;
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (blue[j][k] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						blue[k][l] = blue[k - 1][l];
					}
				}
			}
			if (blue[1][y] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						blue[j][k] = blue[j - 1][k];
					}
				}
			}

			check = 0;
			for (int j = 1; j < 5; j++)
			{
				if (green[x][j + 1] == 1)
				{
					green[x][j] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
				green[x][5] = 1;
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (green[k][j] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						green[l][k] = green[l][k - 1];
					}
				}
			}
			if (green[x][1] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						green[k][j] = green[k][j - 1];
					}
				}
			}
			break;



		case 2:
			check = 0;
			for (int j = 0; j < 4; j++)
			{
				if (blue[j + 2][y] == 1)
				{
					blue[j][y] = 1;
					blue[j + 1][y] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				blue[4][y] = 1;
				blue[5][y] = 1;
			}
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (blue[j][k] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						blue[k][l] = blue[k - 1][l];
					}
				}
			}
			if (blue[1][y] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						blue[j][k] = blue[j - 1][k];
					}
				}
			}
			if (blue[1][y] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						blue[j][k] = blue[j - 1][k];
					}
				}
			}

			check = 0;

			for (int j = 1; j < 5; j++)
			{
				if (green[x][j + 1] == 1 || green[x + 1][j + 1] == 1)
				{
					green[x][j] = 1;
					green[x + 1][j] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				green[x][5] = 1;
				green[x + 1][5] = 1;
			}
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (green[k][j] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						green[l][k] = green[l][k - 1];
					}
				}
			}
			if (green[x][1] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						green[k][j] = green[k][j - 1];
					}
				}
			}
			break;



		case 3:
			check = 0;
			for (int j = 1; j < 5; j++)
			{
				if (blue[j + 1][y] == 1 || blue[j + 1][y + 1] == 1)
				{
					blue[j][y + 1] = 1;
					blue[j][y] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				blue[5][y] = 1;
				blue[5][y + 1] = 1;
			}
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (blue[j][k] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						blue[k][l] = blue[k - 1][l];
					}
				}
			}
			if (blue[1][y] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						blue[j][k] = blue[j - 1][k];
					}
				}
			}

			check = 0;
			for (int j = 0; j < 4; j++)
			{
				if (green[x][j + 2] == 1)
				{
					green[x][j] = 1;
					green[x][j + 1] = 1;
					check = 1;
					break;
				}
			}
			if (check == 0)
			{
				green[x][4] = 1;
				green[x][5] = 1;
			}
			for (int j = 2; j < 6; j++)
			{
				bool bo = 0;
				for (int k = 0; k < 4; k++)
				{
					if (green[k][j] == 0)
					{
						bo = 1;
						break;
					}
				}
				if (bo == 1)
					continue;
				score++;
				for (int k = j; k > 0; k--)
				{
					for (int l = 0; l < 4; l++)
					{
						green[l][k] = green[l][k - 1];
					}
				}
			}
			if (green[x][1] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						green[k][j] = green[k][j - 1];
					}
				}
			}
			if (green[x][1] == 1)
			{
				for (int j = 5; j > 0; j--)
				{
					for (int k = 0; k < 4; k++)
					{
						green[k][j] = green[k][j - 1];
					}
				}
			}
			break;
		}
		for (int j = 0; j < 4; j++)
		{
			blue[0][j] = 0;
			green[j][0] = 0;
		}
	}

	int remain = 0;
	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (blue[i][j] == 1)
				remain++;
			if (green[j][i] == 1)
				remain++;
		}
	}

	cout << score << '\n' << remain;
}