// 2023년 7월 30일 19:32:31
// 맞았습니다!!
// 4352KB
// 72ms
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
        sum += arr1[i];
    }
    for(int i = 1; i < n - 1; i++)
    {
        arr2m1[i] = abs(arr[i + 1].first - arr[i - 1].first) 
        + abs(arr[i + 1].second - arr[i - 1].second) - arr1[i + 1] - arr1[i];
    }
    
    int m = arr2m1[1];
    
    for(int i = 2; i < n - 1; i++)
    {
        if(arr2m1[i] < m) {m = arr2m1[i];}
    }
    
    cout << sum + m;
}