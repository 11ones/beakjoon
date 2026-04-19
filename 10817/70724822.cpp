// 2023년 12월 25일 17:47:33
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    if(a > b) swap(a, b);
    cout << b;
}