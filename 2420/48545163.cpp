// 2022년 8월 31일 16:16:57
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long c = b - a;
    if(c < 0)
        c = -c;
    cout << c;
}