// 2022년 4월 27일 22:17:18
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

int main()
{
	int a, b, sava, savb;
	double result;
	scanf("%d %d", &a, &b);
	while (a!=0&&b!=0)
	{
		double min = 0;
		int minprice = 10000;
		for (int i = 0; i < 8; i++)
		{
			int dra = device[i].resolution[0];
			int drb = device[i].resolution[1];
			sava = a;
			savb = b;
			double numa = (double)dra / sava;
			sava = (int)(numa * sava);
			savb = (int)(numa * savb);
			result = (double)(sava * savb) / (dra * drb);
			if (result <= 1 && (min < result || (min == result && device[i].price < minprice)))
			{
				min = result;
				minprice = device[i].price;
			}
			sava = a;
			savb = b;
			double numb = (double)drb / savb;
			sava = (int)(numb * sava);
			savb = (int)(numb * savb);
			result = (double)(sava * savb) / (dra * drb);
			if (result <= 1 && (min < result || (min == result && device[i].price < minprice)))
			{
				min = result;
				minprice = device[i].price;
			}
		}
		printf("%d\n", minprice);
		scanf("%d %d", &a, &b);
	}
}