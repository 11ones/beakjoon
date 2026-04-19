// 2025년 7월 9일 14:14:52
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, t = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 12; i+=2) {
        if (s[i] == '*') s[i] = '0', t = 1;
        if (s[i + 1] == '*') s[i + 1] = '0', t = 3;
        x += (s[i] - '0') + 3 * (s[i + 1] - '0');
    }
    x += s[12] - '0';
    cout << (t == 1 ? (10 - x % 10) % 10 : x % 10 * 3 % 10);
}