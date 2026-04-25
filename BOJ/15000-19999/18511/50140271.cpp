// 2022년 10월 5일 21:54:55
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    int carr[9];
    int k;
    cin >> N >> k;

    char arr[3];
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr, arr + k);
    if (k == 3)
    {
        if (arr[0] == arr[1])
        {
            arr[1] = arr[2];
            k--;
        }
    }
    if (k > 1 && arr[k - 1] == arr[k - 2])
    {
        k--;
    }
    string sav = N;
    for (int i = 0; i < N.size(); i++) //N과 같은 자릿수에서 최솟값
        sav[i] = arr[0];
    if (stoi(sav) <= stoi(N)) //N보다 최솟값이 작아야 같은 자리수
    {
        for (int i = 0; i < N.size(); i++) // 최댓값 설정
        {
            sav[i] = arr[k - 1];
            carr[i] = k - 1;
        }

        int i = sav.size() - 1;
        while (stoi(sav) > stoi(N))
        {
            if (k > 2 && carr[i] == 2) // 뒷자리부터 하나씩 감소
            {
                sav[i] = arr[1];
                carr[i] = 1;
            }
            else if (k > 1 && carr[i] == 1)
            {
                sav[i] = arr[0];
                carr[i] = 0;
            }
            else
            {  
                carr[i] = k - 1;
                sav[i--] = arr[k - 1];
                continue; // 그 자리 전부 낮췄으면 한자리 앞으로 이동
            }
            for (int j = sav.size() - 1; j > i; j--) // 맨 뒷자리부터 안 줄어든 자리 검사
            {
                if (carr[j] != 0)
                    i = j;
            }
        }
        cout << sav;
    }
    else //자릿수가 하나 낮을떄
    {
        for (int i = 0; i < sav.size() - 1; i++) //무조건 최댓값임
        {
            sav[i] = arr[k - 1];
        }
        sav.pop_back();
        cout << sav;
    }
}