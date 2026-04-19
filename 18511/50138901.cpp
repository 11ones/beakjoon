// 2022년 10월 5일 21:31:34
// 틀렸습니다
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
    int carr[9];
    int k;
    cin >> N >> k;

    char arr[3];
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr, arr + k);
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
                carr[i] = 2;
                sav[i--] = arr[k - 1];
      
                continue; // 그 자리 전부 낮췄으면 한자리 앞으로 이동
            }
            for (int j = sav.size() - 1; j > i; j--) // 맨 뒷자리부터 안 줄어든 자리 검사
            {
                if (carr[0] != 0)
                    i = j;
            }
        }
        cout << sav;
    }
    else //자릿수가 하나 낮을떄
    {
        sav[sav.size() - 1] = '\0';
        for (int i = 0; i < sav.size() - 1; i++) //무조건 최댓값임
        {
            sav[i] = arr[k - 1];
        }
        cout << sav;
    }
}