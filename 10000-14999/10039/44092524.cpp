// 2022년 6월 2일 22:25:36
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

using namespace std;

int main()   
{
    int sum{ 0 };
    for(int i{ 0 }; i < 5; i++)
    {
        int x;
        cin >> x;
        if(x < 40)
            x = 40;
        sum += x;
    }
    cout << sum / 5;
}