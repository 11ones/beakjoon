// 2022년 5월 2일 15:47:10
// 맞았습니다!!
// 1388KB
// 24ms
#include <stdio.h>

typedef struct
{
	int arr[100000];
	int size;
}Heap;

void Insert(Heap* hp, int num)
{
	int x = ++hp->size;

	while ((x != 1) && (num > hp->arr[x / 2]))
    {
		hp->arr[x] = hp->arr[x / 2];
		x /= 2;
	}
	hp->arr[x] = num;
}

int Delete(Heap* hp) 
{
    if (hp->size == 0) return 0;
    int root = hp->arr[1];
    hp->arr[1] = hp->arr[hp->size--];
    int up = 1;
    int down;

    while (1)
    {
        down = up * 2;
        if (down + 1 <= hp->size && hp->arr[down] < hp->arr[down + 1])
            down++;
        if (down > hp->size || hp->arr[down] < hp->arr[up])
            break;

        int sav = hp->arr[up];
        hp->arr[up] = hp->arr[down];
        hp->arr[down] = sav;

        up = down;
    }
    return root;
}

int main()
{
    Heap hp;
    hp.size = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
        int x;
        scanf("%d", &x);
        if (x == 0)
            printf("%d\n", Delete(&hp));
        else
            Insert(&hp, x);
	}
}