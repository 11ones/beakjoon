// 2025년 7월 11일 12:49:13
// 맞았습니다!!
// 2024KB
// 28ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, r;
        cin >> x;
        string s = to_string(x);
        s[3] = s[2], s[4] = s[1], s[5] = s[0];
        r = stoi(s);
        if (x / 1000 != 100) {
            s = to_string(x - 1000);
            s[3] = s[2], s[4] = s[1], s[5] = s[0];
            if (abs(x - r) >= abs(x - stoi(s))) {
                r = stoi(s);
            }
        }
        if (x / 1000 != 999) {
            s = to_string(x + 1000);
            s[3] = s[2], s[4] = s[1], s[5] = s[0];
            if (abs(x - r) > abs(x - stoi(s))) {
                r = stoi(s);
            }
        }
        cout << r << '\n';
    }
}