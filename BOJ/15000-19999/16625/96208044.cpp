// 2025년 7월 11일 12:33:27
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (c >= a * b / gcd(a, b) ? "yes" : "no");
}