// 2022년 6월 2일 22:24:35
// 틀렸습니다
// KB
// ms
#include <iostream>

using namespace std;

int main()   
{
    int sum;
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