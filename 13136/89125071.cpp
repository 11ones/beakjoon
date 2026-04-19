// 2025년 1월 24일 21:31:17
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    long a, b, c;
    cin >> a >> b >> c;
    cout << ((a + c - 1) / c) * ((b + c - 1) / c);
}