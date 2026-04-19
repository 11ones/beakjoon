// 2025년 7월 8일 22:11:02
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, l = 0, r = 0;
    cin >> a >> b;
    while (a > 0 && b > 0) {
        a > b ? (l += a / b, a -= a / b * b) : (r += b / a, b -= b / a * a);
    }
    a ? --r : --l;
    cout << l << " " << r;
}