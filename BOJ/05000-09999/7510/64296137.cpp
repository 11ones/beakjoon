// 2023년 7월 30일 20:10:35
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int arr[3];
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        cout << "Scenario #" << i + 1 << ":" << '\n';
        if(*max_element(arr, arr + 3) == arr[0]) {swap(arr[0], arr[2]);}
        if(*max_element(arr, arr + 3) == arr[1]) {swap(arr[1], arr[2]);}
        if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {cout << "yes";}
        else {cout << "no";}
        
        cout << "\n\n";
    }
}