// 2022년 5월 10일 20:12:30
// 틀렸습니다
// KB
// ms
#include <stdio.h>

typedef struct
{
    int arr[10000000];
    int size;
}Heap;

void Insertmin(Heap* hp, int num)
{
    int x = ++hp->size;

    while ((x != 1) && (num < hp->arr[x / 2])) {
        hp->arr[x] = hp->arr[x / 2];
        x /= 2;
    }
    hp->arr[x] = num;
}

int Deletemin(Heap* hp)
{
    if (hp->size == 0) return 0;
    int root = hp->arr[1];
    hp->arr[1] = hp->arr[hp->size--];
    int up = 1;
    int down;

    while (1) {
        down = up * 2;
        if (down + 1 <= hp->size && hp->arr[down] > hp->arr[down + 1])
            down++;
        if (down > hp->size || hp->arr[down] > hp->arr[up])
            break;

        int sav = hp->arr[up];
        hp->arr[up] = hp->arr[down];
        hp->arr[down] = sav;

        up = down;
    }
    return root;
}

void Insertmax(Heap* hp, int num)
{
    int x = ++hp->size;

    while ((x != 1) && (num > hp->arr[x / 2]))
    {
        hp->arr[x] = hp->arr[x / 2];
        x /= 2;
    }
    hp->arr[x] = num;
}

int Deletemax(Heap* hp)
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

Heap hpmin, hpmax;

int main()
{
    int t;
    scanf("%d", &t);
    for (int q = 0; q < t; q++)
    {
        hpmin.size = 0;
        hpmax.size = 0;
        int n;
        scanf("%d", &n);
        int check = 0;
        int checkmin = 0;
        int checkmax = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            int x;
            scanf(" %c %d", &c, &x);

            if (c == 'I')
            {
                Insertmin(&hpmin, x);
                Insertmax(&hpmax, x);
                check++;
            }
            else if (x == -1 && check > checkmin + checkmax)
            {
                Deletemin(&hpmin);
                checkmin++;
            }
            else if (check > checkmin + checkmax)
            {
                Deletemax(&hpmax);
                checkmax++;
            }
        }
        if (check > checkmin + checkmax)
            printf("%d %d\n", hpmax.arr[1], hpmin.arr[1]);
        else
            printf("EMPTY\n");
    }
}