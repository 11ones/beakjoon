// 2022년 5월 2일 16:28:52
// 맞았습니다!!
// 1116KB
// 0ms
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

int func(int dra, int drb, int a, int b)
{
	int sava = a;
	int savb = b;
	double numa = (double)dra / sava;
	if ((numa * sava) > dra || (numa * savb) > drb)
	{
		return 0;
	}
	sava = (int)(numa * sava);
	savb = (int)(numa * savb);
	return (int)((double)savb / drb * 1000);
}

int main()
{
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
	while (a != 0 && b != 0)
	{
		int min = 0;
		int minprice = 10000;
		for (int i = 0; i < 8; i++)
		{
			int dra = device[i].resolution[0];
			int drb = device[i].resolution[1];
			int dp = device[i].price;
			result = func(dra, drb, a, b);
			if (result <= 10000 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
			result = func(drb, dra, a, b);
			if (result <= 10000 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
			result = func(dra, drb, b, a);
			if (result <= 10000 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
			result = func(drb, dra, b, a);
			if (result <= 10000 && (min < result || (min == result && dp < minprice)))
			{
				min = result;
				minprice = dp;
			}
		}
		printf("%d\n", minprice);
		scanf("%d %d", &a, &b);
	}
}