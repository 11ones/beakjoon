// 2025년 7월 9일 14:14:05
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d[10] = { 0, 3, 6, 9, 2, 5, 8, 1, 4, 7 };
    int x = 0, t = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 12; i+=2) {
        if (s[i] == '*') s[i] = '0', t = 1;
        if (s[i + 1] == '*') s[i + 1] = '0', t = 3;
        x += (s[i] - '0') + 3 * (s[i + 1] - '0');
    }
    x += s[12] - '0';
    cout << (t == 1 ? (10 - x % 10) % 10 : d[x % 10]);
}