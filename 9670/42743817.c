// 2022년 5월 2일 16:13:16
// 틀렸습니다
// KB
// ms
#include <stdio.h>

typedef struct
{
	int resolution[2];
	int price;
}Device;

Device device[8] =
{
	{{1024,768},319},
	{{1024,600},419},
	{{960,640},450},
	{{2048,1536},519},
	{{1136,640},599},
	{{1280,800},600},
	{{1080,1920},630},
	{{1136,640},719}
};

double func(int dra, int drb, int a, int b)
{
	int sava = a;
	int savb = b;
	double numa = (double)dra / sava;
	sava = (int)(numa * sava);
	savb = (int)(numa * savb);
	return (double)savb / drb;
}

int main()
{
	int a, b;
	double result;
	scanf("%d %d", &a, &b);
	while (a != 0 && b != 0)
	{
		double min = 0;
		int minprice = 10000;
		for (int i = 0; i < 8; i++)
		{
			int dra = device[i].resolution[0];
			int drb = device[i].resolution[1];
			int dp = device[i].price;
			result = func(dra, drb, a, b);
			if (result <= 1 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
			result = func(dra, drb, b, a);
			if (result <= 1 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
		}
		printf("%d\n", minprice);
		scanf("%d %d", &a, &b);
	}
}