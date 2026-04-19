// 2025년 7월 8일 21:57:11
// 맞았습니다!!
// 2020KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n, m, x, r = 0;
    cin >> n >> m;
    while (n--) {
        cin >> x;
        r = r ? gcd(abs(m - x), r) : abs(m - x);
    }
    cout << r;
}