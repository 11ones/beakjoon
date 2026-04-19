// 2025년 2월 25일 23:39:32
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (1) {
        cin >> n;
        if (!n) break;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
}
          