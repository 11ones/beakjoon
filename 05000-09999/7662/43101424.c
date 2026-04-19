// 2022년 5월 10일 19:32:55
// 시간 초과
// KB
// ms
#include <stdio.h>

typedef struct
{
    int arr[100000];
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


int main()
{
    int t;
    scanf("%d", &t);
    for (int q = 0; q < t; q++)
    {
        Heap hpmin, hpmax;
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
            else if (x == -1 && check >= checkmin + checkmax)
            {
                Deletemin(&hpmin);
                checkmin++;
            }
            else if (check >= checkmin + checkmax)
            {
                Deletemax(&hpmax);
                checkmax++;
            }
        }
        if (check >= checkmin + checkmax)
            printf("%d %d", Deletemax(&hpmax), Deletemin(&hpmin));
        else
            printf("EMPTY\n");
    }
}