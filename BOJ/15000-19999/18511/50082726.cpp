// 2022년 10월 4일 21:10:34
// 런타임 에러 (Segfault)
// KB
// ms
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string N;

    int k;
    cin >> N >> k;

    char arr[3];
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr, arr + k);
    string sav = N;
    for (int i = 0; i < N.size(); i++) // 최댓값 설정
        sav[i] = arr[k - 1];

    int i = sav.size() - 1;
    while (stoi(sav) > stoi(N))
    {
        if (k > 2 && sav[i] == arr[2]) // 뒷자리부터 하나씩 감소
        {
            sav[i] = arr[1];
        }
        else if (k > 1 && sav[i] == arr[1])
        {
            sav[i] = arr[0];
        }
        else
        {
            if (i == 0)
            {
                for (int i = 0; i < sav.size() - 1; i++)
                    sav[i] = sav[i + 1];
            }
            sav[i--] = arr[k - 1];
            continue; // 그 자리 전부 낮췄으면 한자리 앞으로 이동
        }
        for (int j = sav.size() - 1; j > i; j--) // 맨 뒷자리부터 안 줄어든 자리 검사
        {
            if (sav[j] != arr[0])
                i = j;
        }
    }
    cout << sav;
}