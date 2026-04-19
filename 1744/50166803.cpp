// 2022년 10월 6일 14:40:30
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int x;
    int posi[50];
    int neg[50];
    int k = 0, j = 0, l = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x > 0)
            posi[k++] = x;
        if (x < 0)
            neg[j++] = x;
        if (x == 0)
            l++;
    }
    sort(posi, posi + k);
    sort(neg, neg + j);
    int sum = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (posi[i] == 1)
        {
            sum += 1;
        }
        else if (i != 0)
        {
            sum += posi[i - 1] * posi[i];
            i--;
        }
        else
        {
            sum += posi[0];
        }
    }
    for (int i = 0; i < j; i++)
    {
        if(neg[i]==-1&&l!=0)
        {
            sum += 0;
        }
        else if (i != 0)
        {
            sum += neg[i] * neg[i + 1];
            i++;
        }
        else
        {
            sum += neg[j - 1];
        }
    }
    cout << sum;
}