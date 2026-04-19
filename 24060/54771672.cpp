// 2023년 1월 27일 11:47:59
// 맞았습니다!!
// 10092KB
// 312ms
#include <iostream>
#include <queue>
using namespace std;

int A[500000];
int tmp[500000];
queue <pair<int, int>> que;

void merge_sort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        que.push({ p, r });
    }
}

int main()
{
    int mycount = 0;
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        cin >> A[i];
    }

    merge_sort(A, 0, x - 1);

    bool check = 0;
    while (!que.empty())
    {
        int p = que.front().first, r = que.front().second;
        que.pop();
        int q = (p + r) / 2;
        int i = p; int j = q + 1; int t = 1;
        while (i <= q && j <= r)
        {
            if (A[i] <= A[j]) tmp[t++] = A[i++];
            else tmp[t++] = A[j++];
        }
        while (i <= q) tmp[t++] = A[i++];
        while (j <= r) tmp[t++] = A[j++];
        i = p; t = 1;
        while (i <= r)
        {
            mycount++;
            if (mycount == y)
            {
                check = 1;
                cout << tmp[t];
                break;
            }
            A[i++] = tmp[t++];
        }
        if (mycount == y) break;
    }
    if (check == 0) cout << "-1";
}