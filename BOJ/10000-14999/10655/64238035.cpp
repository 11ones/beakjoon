// 2023년 7월 29일 13:42:38
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<pair<int, int>> arr;
    int n;
    cin >> n;
    
    int sum = 0;
    int* arr1 = new int[n];
    int* arr2m1 = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    
    for(int i = 1; i < n; i++)
    {
        arr1[i] = abs(arr[i].first - arr[i - 1].first) 
        + abs(arr[i].second - arr[i - 1].second);
        sum += arr[i];
    }
    for(int i = 1; i < n - 1; i++)
    {
        arr2m1[i] = abs(arr[i + 1].first - arr[i - 1].first) 
        + abs(arr[i + 1].second - arr[i - 1].second) - arr1[i + 1] - arr[i];
    }
    
    cout << min(arr2m1);
}
