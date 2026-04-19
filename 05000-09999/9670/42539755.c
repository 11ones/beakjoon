// 2022년 4월 27일 22:40:36
// 틀렸습니다
// KB
// ms
#include <stdio.h>
#include <math.h>
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

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

double func(int dra, int drb, int a, int b)
{
	int sava = a;
	int savb = b;
	double numa = (double)dra / sava;
	sava = round(numa * sava);
	savb = round(numa * savb);
	return (double)(sava * savb) / (dra * drb);
}

int main()
{
	int a, b;
	double result;
	scanf("%d %d", &a, &b);
	while (a!=0&&b!=0)
	{
		int gcd = GCD(a, b);
		a /= gcd;
		b /= gcd;
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
			result = func(drb, dra, a, b);
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
			result = func(drb, dra, b, a);
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