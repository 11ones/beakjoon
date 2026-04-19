// 2025년 1월 23일 21:25:26
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b) + min(a, c) + min(a, d);
}