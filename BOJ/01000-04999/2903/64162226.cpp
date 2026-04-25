// 2023년 7월 27일 19:54:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 2;
    for(int i = 0; i < n; i++)
    {
        ans = (ans - 1) * 2 + 1;
    }
    cout << ans * ans;
}