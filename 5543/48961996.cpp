// 2022년 9월 9일 23:43:46
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr {0, };
    for(int elem : arr)
    {
        cin >> elem;
    }
    cout << min(arr[0], min(arr[1], arr[2])) + min(arr[3], arr[4]) - 50;
}