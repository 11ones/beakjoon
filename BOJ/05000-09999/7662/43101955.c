// 2022년 5월 10일 19:43:47
// 틀렸습니다
// KB
// ms
#include <stdio.h>

typedef struct
{
    int arr[100000];
    int size;
}Heap;

void Insert(Heap* hp, int num)
{
    int x = ++hp->size;

    while ((x != 1) && (num < hp->arr[x / 2])) {
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

int main()
{
    int t;
    scanf("%d", &t);
    Heap hp;
    for (int q = 0; q < t; q++)
    {
        hp.size = 0;
        int n;
        scanf("%d", &n);
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            int x;
            scanf(" %c %d", &c, &x);

            if (c == 'I')
            {
                Insert(&hp, x);
                check++;
            }
            else if (x == -1)
            {
                Delete(&hp);
            }
            else if (hp.size > 0)
            {
                hp.size--;
            }
        }
        if (hp.size > 0)
            printf("%d %d\n", hp.arr[hp.size], Delete(&hp));
        else
            printf("EMPTY\n");
    }
}