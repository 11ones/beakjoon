// 2023년 8월 13일 14:02:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    long long x;
    cin >> x;
    cout << x * (x + 1) / 2 << '\n' 
        << x * x * (x + 1) * (x + 1) / 4 << '\n'
        << x * x * (x + 1) * (x + 1) / 4 << '\n';
}