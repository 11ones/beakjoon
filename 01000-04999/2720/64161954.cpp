// 2023년 7월 27일 19:49:27
// 맞았습니다!!
// 2020KB
// 20ms
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int q = 0; q < t; q++)
    {
        int c;
        cin >> c;
        int arr[4];
        arr[0] = c / 25;
        c %= 25;
        arr[1] = c / 10;
        c %= 10;
        arr[2] = c / 5;
        c %= 5;
        arr[3] = c / 1;
        for(int elem : arr)
            cout << elem << " ";
        cout << '\n';
    }
}
