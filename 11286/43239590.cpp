// 2022년 5월 13일 15:06:43
// 맞았습니다!!
// 2412KB
// 892ms
#include <iostream>
#include <array>
#include <cmath>

using namespace std;

typedef struct
{
    array <int, 100000> arr;
    int size;
}Heap;

Heap hp;

void Insert(Heap* hp, int num)
{
    int x{ ++hp->size };
    while ((x != 1) && (abs(num) <= abs(hp->arr[x / 2])))
    {
        if (abs(num) == abs(hp->arr[x / 2]) && num > 0 && hp->arr[x / 2] < 0)
            break;
        hp->arr[x] = hp->arr[x / 2];
        x /= 2;
    }
    hp->arr[x] = num;
}

int Delete(Heap* hp)
{
    if (hp->size == 0) return 0;
    int root{ hp->arr[1] };
    hp->arr[1] = hp->arr[hp->size--];
    int up{ 1 };
    int down;
    while (1)
    {
        down = up * 2;
        if (down + 1 <= hp->size && (abs(hp->arr[down]) > abs(hp->arr[down + 1]) || (abs(hp->arr[down]) == abs(hp->arr[down + 1]) && hp->arr[down] > 0 && hp->arr[down + 1] < 0)))
            down++;
        if (down > hp->size || (abs(hp->arr[down]) > abs(hp->arr[up])) || (abs(hp->arr[down]) == abs(hp->arr[up]) && hp->arr[down] > 0 && hp->arr[up] < 0))
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
    hp.size = 0;
    int n;
    cin >> n;
    for (int i{ 0 }; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            printf("%d\n", Delete(&hp));
        else
            Insert(&hp, x);
    }
}