// 2022년 9월 9일 23:46:30
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr {0, };
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> arr[i];
    }
    cout << min(arr[0], min(arr[1], arr[2])) + min(arr[3], arr[4]) - 50;
}