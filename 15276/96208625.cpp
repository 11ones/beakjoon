// 2025년 7월 11일 12:53:51
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, r = 1e8;
        cin >> x;
        array<int, 3> a = { -1000, 0, 1000 };
        for (int e : a) {
            if (x + e > 1e6 || x + e < 1e5) continue;
            string s = to_string(x + e);
            s[3] = s[2], s[4] = s[1], s[5] = s[0];
            if (abs(x - r) >= abs(x - stoi(s))) {
                r = stoi(s);
            }
        }
        cout << r << '\n';
    }
}