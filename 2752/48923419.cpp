// 2022년 9월 8일 21:17:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int sav = a;
    a = b;
    b = sav;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b)
        swap(a, b);
    if(b > c)
        swap(b, c);
    if(a > b)
        swap(a, b);
    cout << a << " " << b << " " << c;
}