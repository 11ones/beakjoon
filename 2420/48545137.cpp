// 2022년 8월 31일 16:16:37
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = b - a;
    if(c < 0)
        c = -c;
    cout << c;
}